//�迭 ����� �ִ��� ���մϴ�
#include <stdio.h>
#include <stdlib.h>

//��� ������ n�� �迭 a�� ����� �ִ��� ���մϴ�
int maxof(const int a[], int n)
{
    int i;
    int max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max) max = a[i];

    return max;
}

int main(void)
{
    int i;
    int *height; //�迭�� ù ��° ����� ������
    int number; //�ο� = �迭 height�� ��� ����

    printf("��� �� : ");
    scanf("%d", number);
    height = calloc(number, sizeof(int));   //��� ���� number ���� �迭�� ����
    printf("%d ����� Ű�� �Է��ϼ���.\n", number);
    for(int i=0; i<number; i++)
    {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("�ִ��� %d �Դϴ�.\n", maxof(height, number));
    free(height);

    return 0;
}