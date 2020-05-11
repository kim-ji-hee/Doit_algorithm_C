#include <stdio.h>

int gcd(int x, int y)
{
    while(y != 0)
    {
        int temp;
        tmep = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(void)
{
    int x, y;
    printf("두 정수의 최대공약수를 구합니다.\n");
    printf("정수를 입력하세요 : ");
    scanf("%d", &x);
    printf("정수를 입력하세요 : ");
    scnaf("%d", &y);
    printf("최대공약수는 %d입니다.\n", gcd(x,y));

    return 0;
}