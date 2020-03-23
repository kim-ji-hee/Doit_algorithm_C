#include <stdio.h>

int sumof(int a, int b)
{
    int i, sum=0;
    if(a<b)
    {
        for(i = a; i<=b; i++)
        {
            sum += i;
        }
    }
    else 
    {
        for(i = b; i<=a; i++)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int a, b, sum;
    printf("두 사이의 정수를 입력하세요\n");
    scanf("%d %d", a ,b);
    sum = sumof(a, b);
    printf("두 수 사이 정수의 합은 %d 입니다.\n", sum);

    return 0;
}