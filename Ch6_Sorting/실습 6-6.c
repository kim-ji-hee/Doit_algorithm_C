//셸 정렬
#include <stdio.h>
#include <stdlib.h>

//셸 정렬 함수
void shell(int a[], int n)
{
    for(int h = n / 2; h > 0; h /= 2)
    {
        for(int i = h; i < n; i++)
        {
            int tmp = a[i];
            for(int j = i - h; j >= 0 && a[j] > tmp; j -= h)
                a[j+h] = a[j];
            a[j+h] = tmp;
        }
    }
}

int main(void)
{
    int nx, *x;
    printf("셸 정렬\n");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    shell(x, nx);   //배열 x를 셸 정렬
    printf("오름차순으로 정렬했습니다.\n");
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    free(x);

    return 0;
}