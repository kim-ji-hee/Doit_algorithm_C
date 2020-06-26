//�� ����(���� 2 : h = ```, 13,4,1)
#include <stdio.h>
#include <stdlib.h>

//�� ���� �Լ�
void shell(int a[], int n)
{
    int h;
    for(h = 1; h < n/9; h = h*3+1)
    ;   //h�� �ʱ갪�� ����
        //1���� �����Ͽ� ���� 3���ϰ� 1�� ���ϸ鼭 n/9�� ���� �ʴ� ���� ū ���� h�� ������
    for(; h > 0; h/= 3)
    {
        for(int i = h; i < n; i++)
        {
            int tmp = a[i];
            for(int j = i - h; j >= 0 && a[j] > tmp; j -= h)
                a[j+h] = a[j];
            a[j+h] = tmp;
        }
    }
}

int main(void)
{
    int nx, *x;
    printf("�� ����\n");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    shell(x, nx);   //�迭 x�� �� ����
    
    printf("������������ �����߽��ϴ�.\n");
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    free(x);

    return 0;
}