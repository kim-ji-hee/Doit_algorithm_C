#include <stdio.h>
#include <stdlib.h>

//Ű�� ����� ����
double aveof(const int a[], int n)
{
    double ave;
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += a[i];
    ave = sum / n;

    return ave;
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
    printf("Ű�� ����� %f �Դϴ�.\n", aveof(height, number));
    free(height);

    return 0;
}