//n단의 숫자 피라미드 출력하기
#include <stdio.h>

void nrpira(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
            printf(" ");
        for(int j=1; j<=(i-1)*2+1; j++)
            printf("%d",i%10);
        printf("\n");
    }
}

int main(void)
{
    int n;
    do {
        printf("몇단의 숫자 피라미드 ? : ");
        scanf("%d",&n);
    } while(n<=0);

    nrpira(n);

    return 0;
}
