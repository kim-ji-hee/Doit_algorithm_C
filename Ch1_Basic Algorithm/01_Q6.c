#include <stdio.h>

int main(void)
{
    int i, n;
    int sum;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값  : ");
    scanf("%d", &n);

    sum=0;
    i=1;
    while(i <= n)
    {
        sum+=i;
        i++;
    }

    printf("1부터 %d 까지의 합은 %d 입니다.\n", n, sum);
    printf("i의 값은 %d 입니다.", i);

    return 0;
}