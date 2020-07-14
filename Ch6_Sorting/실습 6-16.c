//도수 정렬 프로그램
#include <stdio.h>
#include <stdlib.h>

//도수 정렬 함수(배열의 요솟값은 0이상 max 이하)
void fsort(int a[], int n, int max)
{
    int *f = calloc(max+1, sizeof(int));    //누적 도수
    int *b = calloc(n, sizeof(int));        //작업용 목적 배열

    for(int i = 0; i <= max; i++) f[i] = 0;              //[Step0]
    for(int i = 0; i < n; i++) f[a[i]]++;                //[Step1]
    for(int i = 1; i <= max; i++) f[i] += f[i-1];        //[Step2]
    for(int i = n - 1; i >= 0; i--) b[--f[a[i]]] = a[i]; //[Step3]
    for(int i = 0; i < n; i++) a[i] = b[i];              //[Step4]

    free(b);
    free(f);
}

int main(void)
{
    int nx, *x;
    const int max = 100;    //가장 큰 값
    printf("도수 정렬 \n");
    printf("요소 개수 : ");

    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("0~%d 의 정수를 입력하세요.\n", max);

    for(int i = 0; i < nx; i++)
    {
        do{
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while(x[i] < 0 || x[i] > max);
    }

    fsort(x, nx, max);  //배열 x를 도수 정렬
    printf("오름차순으로 정렬했습니다\n");

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}