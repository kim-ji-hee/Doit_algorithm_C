#include <stdio.h>

int main(void)
{
    int n, sum;
    puts("1���� n������ ���� ���մϴ�.");
    printf("n�� ��: ");
    scanf("%d", &n);
    sum = 0;

    if (n%2==0)
    {
        sum = (1+n)*(n/2);
    }
    else
    {
        sum = (1+n)*(n/2)+((n+1)/2);
    }
    printf("1���� %d������ ���� %d �Դϴ�.",n, sum);

    return 0;
}
