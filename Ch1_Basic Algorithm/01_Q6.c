#include <stdio.h>

int main(void)
{
    int i, n;
    int sum;
    puts("1���� n������ ���� ���մϴ�.");
    printf("n�� ��  : ");
    scanf("%d", &n);

    sum=0;
    i=1;
    while(i <= n)
    {
        sum+=i;
        i++;
    }

    printf("1���� %d ������ ���� %d �Դϴ�.\n", n, sum);
    printf("i�� ���� %d �Դϴ�.", i);

    return 0;
}