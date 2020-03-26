#include <stdio.h>
#include <stdlib.h>

//키의 최솟값을 구함
int minof(const int a[], int n)
{
    int i;
    int min = a[0];
    for(i=0; i<n; i++)
        if(a[i] < min) min = a[i];
    return min;
}

int main(void)
{
    int *height;    //배열의 첫 번째 요소의 포인터
    int number;    //인원 = 배열 height의 요소 개수
    printf("사람 수 : ");
    scanf("%d", &number);
    
    height = calloc(number, sizeof(int));   //요소 개수 number 개인 배열을 생성
    printf("%d 사람의 키를 입력하세요.\n", number);
    for(int i=0; i<number; i++)
    {
        printf("height[i] : ", i);
        scanf("%d", &height[i]);
    }
    printf("최솟값은 %d 입니다.\n", minof(height, number));
    free(height);   //배열 height를 해제

    return 0;
}