//qsort �Լ��� ����Ͽ� ���� �迭�� ������������ ����
#include <stdio.h>
#include <stdlib.h>

//int�� �� �Լ�(�������� ���Ŀ� ���)
int int_cmp (const int *a, const int *b)
{
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int nx, *x;
    printf("qsort�� ���� ����\n");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //����� ������ nx�� int�� �迭 ����
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    qsort(x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmp);
    printf("������������ �����߽��ϴ�\n");
    for(int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}