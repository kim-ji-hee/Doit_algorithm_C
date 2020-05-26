//�ܼ� ���� ����
#include <stdio.h>
#include <stdlib.h>

//�ܼ� ���� ���� �Լ�
void insertion(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int tmp = a[i];
        for(int j = i; j > 0 && a[j-1] > tmp; j--)
        {
            a[j] = a[j-1];
        }
        a[j] = tmp;
    }
}

int main(void)
{
    int nx;
    int *x;     //�迭�� ù ��° ��ҿ� ���� ������
    printf("�ܼ� ���� ����\n");

    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //����� ������ nx�� int�� �迭�� ����

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    insertion(x, nx);   //�迭 x�� �ܼ� ���� ����

    printf("������������ �����߽��ϴ�.\n");
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : %d\n", i, x[i]);
    }

    free(x);

    return 0;
}