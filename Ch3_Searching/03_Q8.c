#include <stdio.h>
#include <stdlib.h>

//base가 가리키는 요소의 크기가 size이고 요솟수가 nmemb인 배열에서
//key와 일치하는 요소를 비교 함수 compar을 사용하여 이진 검색
void *binsearch(const void *key, const void *base, size_t nmemb, size_t size, 
                int(*compar)(const void *, const void *))
{
    size_t pl = 0;
    size_t pr = nmemb - 1;
    size_t pc;
    char *x = (char *)base;

    if(nmemb > 0)
    {
        do {
            pc = (pl + pr) / 2;
            if(!compar((const void *)&x[pc*size], key))
                return (&x[pc*size]);
            else if(compar((const void *)&x[pc*size], key) == -1)
                pl = pc + 1;
            else 
                pr = pc - 1;
        } while(pl <= pr);
    }

    return NULL;    //검색 실패
}

int int_cmpr(const int *a, const int *b)
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
    int nx, ky;
    int *x;
    int *p;

    printf("binsearch 함수를 사용하여 검색");
    printf("요소 수: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("오름차순으로 입력하세요 :");
    printf("x[0] : ");
    scanf("%d", &x[0]);

    for(int i=1; i<nx; i++)
    {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while (x[i] < x[i-1]);

    }

    printf("검색 값 : ");
    scanf("%d", &ky);

    p = binsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmpr);

    if(p == NULL)
        puts("검색에 실패했습니다.");
    else
        printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p-x));

    free(x);

    system("pause");
    return 0;
}