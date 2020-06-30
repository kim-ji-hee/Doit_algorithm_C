//������
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do { type t = x; x = y; y = t; } while(0)

//�� ���� �Լ�
void quick (int a[], int left, int right)
{
    int pl = left;      //���� Ŀ��
    int pr = right;     //������ Ŀ��
    int x = a[(pl + pr) / 2]    //�ǹ��� ��� ��Ҹ� ����
    do {
        while(a[pl] < x) pl++;
        while(a[pr] > x) pr--;
        if(pl <= pr) {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
    } while(pl <= pr);

    if(left < pr) quick(a, left, pr);
    if(pl < right) quick(a, pl, right);    
}

int main(void)
{
    int nx, *x;
    printf("�� ����");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    quick(x, 0, nx-1);  //�迭 x�� ���ؼ� �� ����
    printf("������������ �����߽��ϴ�.\n");
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    free(x);    //�迭�� ����

    return 0;
}