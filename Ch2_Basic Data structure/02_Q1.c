#include <stdio.h>
#include <stdlib.h>

//Ű�� �ּڰ��� ����
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
    int *height;    //�迭�� ù ��° ����� ������
    int number;    //�ο� = �迭 height�� ��� ����
    printf("��� �� : ");
    scanf("%d", &number);
    
    height = calloc(number, sizeof(int));   //��� ���� number ���� �迭�� ����
    printf("%d ����� Ű�� �Է��ϼ���.\n", number);
    for(int i=0; i<number; i++)
    {
        printf("height[i] : ", i);
        scanf("%d", &height[i]);
    }
    printf("�ּڰ��� %d �Դϴ�.\n", minof(height, number));
    free(height);   //�迭 height�� ����

    return 0;
}