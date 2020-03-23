#include <stdio.h>

int main(void)
{
    int i, n, sum;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: ");
    scanf("%d", &n);
    sum = 0;
    for(i=1; i<=(n-1); i++)
    {
        sum+=i;
        printf("%d + ", i);
    }
    sum+=n;
    printf("%d = %d", n, sum);

    return 0;
}