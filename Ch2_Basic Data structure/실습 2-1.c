//자료형이 int형이고 요소 개수가 5인 배열
#include <stdio.h>

#define N 5 //배열의 요소 개수
int main(void)
{
    int i;
    int a[N];
    for(i = 0; i < N; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    puts("각 요소의 값");
    for(i = 0; i < N; i++)
        printf("a[%d] : %d\n", i, a[i]);

    return 0;
}
