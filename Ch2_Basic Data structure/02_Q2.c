#include <stdio.h>
#include <stdlib.h>

//Ű�� �հ踦 ����
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
    printf("��� �� : ");
    scanf("%d", &number);
    
    height = calloc(number, sizeof(int));
    printf("%d ����� Ű�� �Է��ϼ��� : \n");
    for (int i=0; i<number; i++)
    {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("Ű�� ���� %d �Դϴ�.\n", sumof(height, number));
    free(height);

    return 0;
}