// Ư������ '*' �� �Ƕ�̵� ���
#include <stdio.h>

void spira(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int j=1; j<=(i-1)*2+1; j++)
            printf("*");
        printf("\n");
    }
}

int main(void)
{
    int n;
    do {
        printf("����� �Ƕ�̵带 ���? : ");
        scanf("%d", &n);
    }while(n<=0);

    spira(n);

    return 0;
}