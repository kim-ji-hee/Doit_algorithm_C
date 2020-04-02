//���� �˻� (���� ���ʿ� �ִ� ��Ҹ� �˻�)
#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key)
{
    int pl, pr, pc;
    pl = 0;
    pr = n - 1;

    while(pl <= pr)
    {
        pc = (pl + pr) / 2;
        if(a[pc] == key)
        {
            while(a[pc-1] == key && pc>pl)
                pc--;

            return pc;
        }
        else if(a[pc] > key)
            pr = pc - 1;
        else
            pl = pc + 1;
    }

    return -1;
}

int main(void)
{
    int nx, ky, idx;
    int *x;

    printf("����� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("%d ���� ��Ҹ� ������������ �Է��ϼ���.\n");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for(int i=1; i<nx; i++)
    {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while(x[i] < x[i-1]);
    }

    printf("�˻� �� : ");
    scanf("%d", &ky);

    idx = bin_search2(x, nx, ky);

    if(idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);

    return 0;
}