#include <stdio.h>

int main(void)
{
    int n, sum;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: ");
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
    printf("1부터 %d까지의 합은 %d 입니다.",n, sum);

    return 0;
}
