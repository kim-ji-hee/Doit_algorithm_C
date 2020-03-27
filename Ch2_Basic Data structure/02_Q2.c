#include <stdio.h>
#include <stdlib.h>

//키의 합계를 구함
int sumof(const int a[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += a[i];

    return sum;
}

int main(void)
{
    int *height;
    int number;
    printf("사람 수 : ");
    scanf("%d", &number);
    
    height = calloc(number, sizeof(int));
    printf("%d 사람의 키를 입력하세요 : \n");
    for (int i=0; i<number; i++)
    {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("키의 합은 %d 입니다.\n", sumof(height, number));
    free(height);

    return 0;
}