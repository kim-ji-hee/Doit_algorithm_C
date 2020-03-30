#include <stdio.h>
#include <stdlib.h>

//배열 b의 모든 요소를 배열 a에 복사하는 함수 (n은 요소 개수)
void ary_copy(int a[], const int b[], int n)
{
    for (int i=0; i<n; i++)
        a[i] = b[i];
}

int main(void)
{
    int cnt;
    int *ary1;
    int *ary2;

    do
    {
        printf("입력할 요소의 개수 : ");
        scanf("%d", &cnt);
    } while(cnt <= 0);

    ary1 = calloc(cnt, sizeof(int));
    ary2 = calloc(cnt, sizeof(int));

    printf("%d개의 정수를 입력하세요 : ");
    for (int i=0; i<cnt; i++)
    {
        printf("ary[%d] : ", i);
        scanf("%d", &ary1[i]);
    }
    
    ary_copy(ary2, ary1, cnt);

    printf("입력한 배열의 모든 요소를 복사했습니다.\n");
    for(int i=0; i<cnt; i++)
        printf("ary2[%d] : %d\n", i, ary2[i]);

    free(ary1);
    free(ary2);

    return 0;
}