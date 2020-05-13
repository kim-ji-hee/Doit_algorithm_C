#include <stdio.h>

int main(void)
{
    int n=1, x;
    printf("정수를 입력하세요 : ");
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        n *= (x-i);
    }
    printf("%d의 순차곱셈 값은 %d입니다.\n", x, n);

    return 0;
}