#include <stdio.h>
#include <stdlib.h>

//base�� ����Ű�� ����� ũ�Ⱑ size�̰� ��ڼ��� nmemb�� �迭����
//key�� ��ġ�ϴ� ��Ҹ� �� �Լ� compar�� ����Ͽ� ���� �˻�
void *binsearch(const void *key, const void *base, size_t nmemb, size_t size, 
                int(*compar)(const void *, const void *))
{
    size_t pl = 0;
    size_t pr = nmemb - 1;
    size_t pc;
    char *x = (char *)base;

    if(nmemb > 0)
    {
        do {
            pc = (pl + pr) / 2;
            if(!compar((const void *)&x[pc*size], key))
                return (&x[pc*size]);
            else if(compar((const void *)&x[pc*size], key) == -1)
                pl = pc + 1;
            else 
                pr = pc - 1;
        } while(pl <= pr);
    }

    return NULL;    //�˻� ����
}

int int_cmpr(const int *a, const int *b)
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
    int nx, ky;
    int *x;
    int *p;

    printf("binsearch �Լ��� ����Ͽ� �˻�");
    printf("��� ��: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("������������ �Է��ϼ��� :");
    printf("x[0] : ");
    scanf("%d", &x[0]);

    for(int i=1; i<nx; i++)
    {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while (x[i] < x[i-1]);

    }

    printf("�˻� �� : ");
    scanf("%d", &ky);

    p = binsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmpr);

    if(p == NULL)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p-x));

    free(x);

    system("pause");
    return 0;
}