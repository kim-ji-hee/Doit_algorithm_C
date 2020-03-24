//�̵ �ﰢ�� ���
#include <stdio.h>

//������ ���� �Ʒ��� �̵ �ﰢ�� ��� �Լ�
void triangleLB(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
}

//������ ���� ���� �̵ �ﰢ�� ��� �Լ�
void triangleLU(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i+1); j++);
            printf("*");
        printf("\n");
    }
}

//������ ������ ���� �̵ �ﰢ�� ��� �Լ�
void triangleRU(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
            printf(" ");
        for(int k=1; k<=(n-i+1); k++)
            printf("*");
        printf("\n");
    }
}

//������ ������ �Ʒ��� �̵ �ﰢ�� ��� �Լ�
void triangleRB(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("*");
        printf("\n");
    }
}

int main(void)
{
    int n;
    do {
        printf("�� �� �ﰢ���Դϱ�? : ");
        scanf("%d",&n);
    } while(n<=0);
    
    printf("����   �Ʒ��� ���� \n"); triangleLB(n);
    printf("����     ���� ���� \n"); triangleLU(n);
    printf("������ �Ʒ��� ���� \n"); triangleRB(n);
    printf("������   ���� ���� \n"); triangleRU(n);

    return 0;
}