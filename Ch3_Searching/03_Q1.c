//선형 검색
#include <stdio.h>
#include <stdlib.h>

//요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search(const int a[], int n, int key)
{
    a[n] = key;
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i] == key)
            break;
    }
    return i == n? -1 : i;
}

int main(void)
{
    int nx, ky, idx;
    int *x;     //배열의 첫 번째 요소에 대한 포인터

    printf("선형 검색\n");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx + 1, sizeof(int));    //요소의 개수가 nx인 int형 배열을 생성
    for(int i=0; i<nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("검색 값 : ");
    scanf("%d", &ky);
    idx = search(x, nx, ky);    //배열 x의 값이 ky인 요소를 선형 검색

    if(idx == -1)
        printf("검색에 실패했습니다.");
    else
        printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);

    free(x);

    return 0;
}