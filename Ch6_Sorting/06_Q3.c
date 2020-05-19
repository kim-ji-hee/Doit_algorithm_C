#include <stdio.h>
#include <stdlib.h>

int is_sorted(const int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(a[i]> a[i+1])
            return 0;
    }
    return 1;    
}

int main(void)
{
    int nx, sorted;
    int *x;

    printf("���� ���� ����(�迭 ���� �˻�)\n");
    printf("��ڼ� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    sorted = is_sorted(x, nx);

    if(sorted)
        printf("�迭�� ���ĵǾ� �ֽ��ϴ�.\n");
    else
        printf("�迭�� ���ĵǾ� ���� �ʽ��ϴ�.\n");

    free(x);

    return 0;
}