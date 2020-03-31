#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t=x; x=y; y=t; } while(0)

//배열 a의 모든 요소의 순서를 뒤섞는 함수 (n은 요소 개수)
void shuffle(int a[], int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        int j = rand() % (i + 1);
        if(i != j)
            swap(int, a[i], a[j]);
    }
}

int main(void)
{
    int cnt;
    int *ary;
    do
    {
        printf("요소의 개수를 입력하세요 : ");
        scanf("%d", &cnt);
    } while (cnt <= 0);

    ary = calloc(cnt, sizeof(int));

    printf("%d 개의 정수를 입력하세요.\n");
    for(int i=0; i<cnt; i++)
    {
        printf("ary[%d] : ", i);
        scanf("%d", &ary[i]);
    }

    suffle(ary, cnt);

    printf("배열의 모든 요소를 섞었습니다.\n");
    for(int i=0; i<cnt; i++)
        printf("ary[%d] : %d\n", i, ary[i]);

    free(ary);

    return 0;    
}