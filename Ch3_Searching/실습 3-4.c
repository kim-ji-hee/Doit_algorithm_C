//���� �˻�
#include <stdio.h>
#include <stdlib.h>

//����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search(const int a[], int n, int key)
{
    int pl = 0;     //�˻� ���� �� ���� �ε���
    int pr = n-1;   //�˻� ���� �� ���� �ε���
    int pc;
    do {
        pc = (pl + pr) / 2;

        if(a[pc] == key)    //�˻� ����
            return pc;

        else if(a[pc] < key)
            pl = pc + 1;

        else
            pr = pc - 1;

    } while(pl <= pr);

    return -1;  //�˻� ����
}

int main(void)
{
    int nx, ky, idx;
    int *x;     //�迭�� ù ��° ��ҿ� ���� ������
    puts("���� �˻�");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //����� ������ nx�� int�� �迭�� ����

    printf("������������ �Է��ϼ���\n");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for(int i=1; i<nx; i++)
    {
        do {
            printf("x[i] : ", i);
            scnaf("%d", &x[i]);
        } while(x[i] < x[i-1]); //�ٷ� ���� ������ ������ �ٽ� �Է�
    }

    printf("�˻��� : ");
    scanf("%d", &ky);
    idx = bin_search(x, nx, ky); //�迭 x���� ���� ky �� ��Ҹ� ���� �˻�
    if(idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
    
    free(x);    //�迭 ����

    return 0;
}