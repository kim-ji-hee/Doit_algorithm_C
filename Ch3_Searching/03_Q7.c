#include <stdio.h>
#include <stdlib.h>

void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *))
{
    for(int i=0; i<nmemb; i++)
    {
        if(base[i] == key)
        if()

    }
}

int int_cmpr(const int *a, const int *b)
{
    if(*a < *b)
        return 1;
    else if(*a > *b)
        return -1;
    else
        return 0;
}

int main(void)
{
    int nx, ky;
    int *x;
    int *p;

    printf("seqsearch �Լ��� ����Ͽ� �˻�");
    printf("��� ��: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("%d ���� ��Ҹ� �Է��ϼ��� :");
    for(int i=0; i<nx; i++)
    {
        printf("x[%d] : ");
        scanf("%d", &x[i]);
    }

    printf("�˻� �� : ");
    scanf("%d", &ky);

    p = seqsearch(&ky, x, nx, sizeof(int), (int*)(const void *, const void *)int_cmpr);

    if(p == NULL)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p-x));

    free(x);

    system("pause");
    return 0;
}