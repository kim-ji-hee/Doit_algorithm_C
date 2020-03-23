// 정사각형 출력
#include <stdio.h>

int main(void)
{
    int n;
    printf("사각형을 출력합니다.\n");
    do {
        printf("입력할 수 : ");
        scanf("%d", &n);
    } while(n<=0);

    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=n; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}