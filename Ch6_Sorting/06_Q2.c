//버블 정렬
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

//버블 정렬
void bubble(int a[], int n)
{
    for(int i = 0; i < n-1; i++) //전체 패스(n-1회)
    {
        int c_cnt = 0;  //비교 횟수
        int s_cnt = 0;  //교환 횟수
        printf("패스%d:\n", i+1);
        
        for(int j = n-1; j > i; j--) //패스안에서 교환(n-1-i회)
        {
            for(int k = 0; k < n-1; k++)
            {
                printf("%3d ", a[k]);
                if(k == n-2-k)
                {
                    if(a[j - 1] > a[j]])
                        printf("+ ");
                    else
                        printf("- ");
                }
                else
                    printf(" ");
            }
            printf("%3d\n", a[n-1]);
            
        }

    }
}

int main(void)
{
    int nx;
    int *x;     //배열의 첫 번째 요소에 대한 포인터

    printf("버블 정렬");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //요소의 개수가 nx인 int형 배열을 생성

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    bubble(x, nx);  //배열 x를 버블 정렬

    printf("오름차순으로 정렬했습니다.\n");
    for(int i = 0; i < nx; i++)
      printf("x[%d] : %d\n", i, x[i]);

    free(x);    //배열 해제

    return 0;
}