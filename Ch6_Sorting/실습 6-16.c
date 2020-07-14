//���� ���� ���α׷�
#include <stdio.h>
#include <stdlib.h>

//���� ���� �Լ�(�迭�� ��ڰ��� 0�̻� max ����)
void fsort(int a[], int n, int max)
{
    int *f = calloc(max+1, sizeof(int));    //���� ����
    int *b = calloc(n, sizeof(int));        //�۾��� ���� �迭

    for(int i = 0; i <= max; i++) f[i] = 0;              //[Step0]
    for(int i = 0; i < n; i++) f[a[i]]++;                //[Step1]
    for(int i = 1; i <= max; i++) f[i] += f[i-1];        //[Step2]
    for(int i = n - 1; i >= 0; i--) b[--f[a[i]]] = a[i]; //[Step3]
    for(int i = 0; i < n; i++) a[i] = b[i];              //[Step4]

    free(b);
    free(f);
}

int main(void)
{
    int nx, *x;
    const int max = 100;    //���� ū ��
    printf("���� ���� \n");
    printf("��� ���� : ");

    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("0~%d �� ������ �Է��ϼ���.\n", max);

    for(int i = 0; i < nx; i++)
    {
        do{
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while(x[i] < 0 || x[i] > max);
    }

    fsort(x, nx, max);  //�迭 x�� ���� ����
    printf("������������ �����߽��ϴ�\n");

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}