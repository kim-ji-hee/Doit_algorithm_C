//���� ����
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

//���� ����
void bubble(int a[], int n)
{
    for(int i = 0; i < n-1; i++) //��ü �н�(n-1ȸ)
    {
        int c_cnt = 0;  //�� Ƚ��
        int s_cnt = 0;  //��ȯ Ƚ��
        printf("�н�%d:\n", i+1);
        
        for(int j = n-1; j > i; j--) //�н��ȿ��� ��ȯ(n-1-iȸ)
        {
            for(int k = 0; k < n-1; k++)
            {
                printf("%3d ", a[k]);
                if(k == n-2-k)
                {
                    if(a[j - 1] > a[j]])
                        printf("+ ");
                    else
                        printf("- ");
                }
                else
                    printf(" ");
            }
            printf("%3d\n", a[n-1]);
            
        }

    }
}

int main(void)
{
    int nx;
    int *x;     //�迭�� ù ��° ��ҿ� ���� ������

    printf("���� ����");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));    //����� ������ nx�� int�� �迭�� ����

    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    bubble(x, nx);  //�迭 x�� ���� ����

    printf("������������ �����߽��ϴ�.\n");
    for(int i = 0; i < nx; i++)
      printf("x[%d] : %d\n", i, x[i]);

    free(x);    //�迭 ����

    return 0;
}