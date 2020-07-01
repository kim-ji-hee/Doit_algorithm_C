//qsort 함수를 사용하여 정수 배열을 오름차순으로 정렬
#include <stdio.h>
#include <stdlib.h>

//int형 비교 함수(오름차순 정렬에 사용)
int int_cmp (const int *a, const int *b)
{
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int nx, *x;
    printf("qsort에 의한 정렬\n");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //요소의 개수가 nx인 int형 배열 생성
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    qsort(x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmp);
    printf("오름차순으로 정렬했습니다\n");
    for(int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}