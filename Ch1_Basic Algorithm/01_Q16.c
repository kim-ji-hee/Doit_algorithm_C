//이등변 삼각형 출력
#include <stdio.h>

//직각이 왼쪽 아래인 이등변 삼각형 출력 함수
void triangleLB(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
}

//직각이 왼쪽 위인 이등변 삼각형 출력 함수
void triangleLU(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i+1); j++);
            printf("*");
        printf("\n");
    }
}

//직각이 오른쪽 위인 이등변 삼각형 출력 함수
void triangleRU(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
            printf(" ");
        for(int k=1; k<=(n-i+1); k++)
            printf("*");
        printf("\n");
    }
}

//직각이 오른쪽 아래인 이등변 삼각형 출력 함수
void triangleRB(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("*");
        printf("\n");
    }
}

int main(void)
{
    int n;
    do {
        printf("몇 단 삼각형입니까? : ");
        scanf("%d",&n);
    } while(n<=0);
    
    printf("왼쪽   아래가 직각 \n"); triangleLB(n);
    printf("왼쪽     위가 직각 \n"); triangleLU(n);
    printf("오른쪽 아래가 직각 \n"); triangleRB(n);
    printf("오른쪽   위가 직각 \n"); triangleRU(n);

    return 0;
}