//���� ����
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

//���� ����
void bubble(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
      for(int j = 0; j < i; j++)
        if(a[j] > a[j+1])
          swap(int, a[j], a[j+1]);
    }
}

int main(void)
{
    int nx;
    int *x;     //�迭�� ù ��° ��ҿ� ���� ������

    printf("���� ����");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //����� ������ nx�� int�� �迭�� ����

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    bubble(x, nx);  //�迭 x�� ���� ����

    printf("������������ �����߽��ϴ�.\n");
    for(int i = 0; i < nx; i++)
      printf("x[%d] : %d\n", i, x[i]);

    free(x);    //�迭 ����

    return 0;
}