// ���簢�� ���
#include <stdio.h>

int main(void)
{
    int n;
    printf("�簢���� ����մϴ�.\n");
    do {
        printf("�Է��� �� : ");
        scanf("%d", &n);
    } while(n<=0);

    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=n; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}