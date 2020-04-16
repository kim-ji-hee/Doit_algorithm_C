#include <stdio.h>
#include <stdlib.h>

void *bsearchx(const void *key, const void *base, size_t nmemb, size_t size, 
                int(*compar)(const void *, const void *))
{
    size_t pl=0, pr=nmemb-1, pc;
    char *x = (char*)base;

    if(nmemb > 0)
    {
        while(1)
        {
            pc = (pl + pr) / 2;
            int comp = compar((const void*)&x[pc*size], key);
        
            if(comp == 0)
            {
                for(; pc>pl; pc--)
                    if(compar((const void*)&x[(pc-1) * size], key))
                        break;
                return &x[pc * size];
            }
            else if(pl == pr)
                break;
            else if(comp < 0)
                pl = pc + 1;        
            else
                pr = pc - 1;
        }
    }
    return NULL;
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
    int *x, *p;

    printf("����� ������ �Է��ϼ��� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("%d���� ��Ҹ� ������������ �Է��ϼ��� ", nx);
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for(int i=1; i<nx; i++)
    {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while(x[i] < x[i-1]);
    }

    printf("ã������ ��� : ");
    scanf("%d", &ky);

    p = bsearchx(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmpr);

    if(p == NULL)
        printf("�˻��� �����߽��ϴ�.");
    else
        printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p-x));

    free(x);

    return 0;
}