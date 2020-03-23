#include <stdio.h>

int main(void)
{
    int n, digit=0;
    
    do{
        puts("양의 정수를 입력하세요: ");
        scanf("%d", &n);
    } while(n<=0);
    
    do {
        digit++;
    } while(n/10 != 0);

    printf("그 수는 %d 자리입니다.\n", digit);

    return 0;
}