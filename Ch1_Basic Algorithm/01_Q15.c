// ���簢�� ���
#include <stdio.h>

int main(void)
{
    int h, w;
    printf("���簢���� ����մϴ�.\n");
    do {
        printf("���� : ");
        scanf("%d",&h);
    } while(h<=0);

    do {
        printf("�ʺ� : ");
        scanf("%d",&w);
    } while(w<=0);

    for(int i=0; i<=h; i++)
    {
        for(int j=0; j<=w; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}