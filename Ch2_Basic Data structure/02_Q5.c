#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)

void ary_reverse(int a[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");

    for (int i=0; i<n/2; i++)
    {
        printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n-i-1);
        swap(int, a[i], a[n-i-1]);

        for (int j=0; j<n; j++)
            printf("%d ", a[j]);
    }
    printf("���� ������ �����մϴ�.\n");        
}

int main(void)
{
    int *x;
    int nx;

    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("%d���� ������ �Է��ϼ���\n", nx);
    for(int i=0; i<nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
    for(int i=0; i<nx; i++)
        printf("x[%d] : %d\n", i, x[i]);
    free(x);

    return 0;
}