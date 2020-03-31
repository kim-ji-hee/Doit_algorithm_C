//���� �˻�
#include <stdio.h>
#include <stdlib.h>

//����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int search(const int a[], int n, int key)
{
    int i;
    while(1)
    {
        if(i == n)
            return -1;  //�˻� ����
        if(a[i] == key)
            return i;   //�˻� ����
        i++;
    }
}

int main(void)
{
    int nx, ky, idx;
    int *x;     //�迭�� ù ��° ��ҿ� ���� ������

    printf("���� �˻�\n");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //����� ������ nx�� int�� �迭�� ����
    for(int i=0; i<nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("�˻� �� : ");
    scanf("%d", &ky);
    idx = search(x, nx, ky);    //�迭 x�� ���� ky�� ��Ҹ� ���� �˻�

    if(idx == -1)
        printf("�˻��� �����߽��ϴ�.");
    else
        printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);

    return 0;
}