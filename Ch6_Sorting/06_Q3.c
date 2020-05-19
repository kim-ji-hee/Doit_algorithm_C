#include <stdio.h>
#include <stdlib.h>

int is_sorted(const int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(a[i]> a[i+1])
            return 0;
    }
    return 1;    
}

int main(void)
{
    int nx, sorted;
    int *x;

    printf("버블 정렬 응용(배열 정렬 검사)\n");
    printf("요솟수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    sorted = is_sorted(x, nx);

    if(sorted)
        printf("배열이 정렬되어 있습니다.\n");
    else
        printf("배열이 정렬되어 있지 않습니다.\n");

    free(x);

    return 0;
}