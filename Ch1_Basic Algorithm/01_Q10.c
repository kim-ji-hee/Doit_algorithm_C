#include <stdio.h>

int main(void)
{
    int n, a, b, sum;

    puts("차이를 구할 정수를 입력하세요");
    printf("a의 값: ");
    scanf("%d", &a);
    printf("b의 값: ");
    scanf("%d", &b);
    if(a>=b)
    {
        do {        
            printf("a보다 큰 값을 입력하세요!\n");
            printf("b의 값: ");
            scanf("%d", &b);
        } while(a>=b);
    }
    else
        printf("b-a는 %d 입니다.\n",b-a);
    
    return 0;
}
    