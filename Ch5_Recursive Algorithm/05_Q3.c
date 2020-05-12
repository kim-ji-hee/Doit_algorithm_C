//배열 모든 요소의 최대 공약수 구하기
#include <stdio.h>

//정수 x,y의 최대 공약수를 반환
int gcd(int x, int y)
{
    if(y==0)
        return x;
    else
        return gcd(y, x%y);
}

//요솟수 n인 배열 a의 모든 요소의 최대 공약수를 구하기
int gcd_array(const int a[], int n)
{
    if(n==1)
        return a[0];
    else if(n==2)
        return gcd(a[0], a[1]);
    else
        return gcd(a[0], gcd_array(&a[1], n-1));    
}

int main(void)
{
    int nx;
    int *x; //배열의 첫 번째 요소에 대한 포인터

    printf("요솟수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for(int i=0; i<nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("최대 공약수는 %d입니다.\n", gcd_array(x, nx));

    free(x);

    return 0;
}