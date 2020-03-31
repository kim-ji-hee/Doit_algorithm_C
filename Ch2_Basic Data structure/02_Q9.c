#include <stdio.h>

//배열 b의 모든 요소를 배열 a에 역순으로 복사하는 함수 (n은 요소 개수)
void ary_rcopy(int a[], const int b[], int n)
{
    for(int i=0; i<n; i++)
        a[i] = b[n-i-1];
}

int main(void)
{
    int cnt;
    int *ary1;
    int *ary2;

    do {
        printf("입력할 정수의 개수 : ");
        scanf("%d", &cnt);
    } while(cnt <= 0);

    ary1 = calloc(cnt, sizeof(int));
    ary2 = calloc(cnt, sizeof(int));

    printf("%d개의 정수를 입력하세요 : ");

    for (int i=0; i<cnt; i++)
    {
        printf("ary1[%d] : ", i);
        scanf("%d", &ary1[i]);
    }

    ary_rcopy(ary2, ary1, cnt);

    printf("입력한 배열을 역순으로 복사했습니다.\n");
    for(int i=0; i<cnt; i++)
        printf("ary2[%d] : %d", i, ary2[i]);

    free(ary1);
    free(ary2);

    return 0;
}