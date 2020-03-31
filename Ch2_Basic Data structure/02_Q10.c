#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t=x; x=y; y=t; } while(0)

//�迭 a�� ��� ����� ������ �ڼ��� �Լ� (n�� ��� ����)
void shuffle(int a[], int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        int j = rand() % (i + 1);
        if(i != j)
            swap(int, a[i], a[j]);
    }
}

int main(void)
{
    int cnt;
    int *ary;
    do
    {
        printf("����� ������ �Է��ϼ��� : ");
        scanf("%d", &cnt);
    } while (cnt <= 0);

    ary = calloc(cnt, sizeof(int));

    printf("%d ���� ������ �Է��ϼ���.\n");
    for(int i=0; i<cnt; i++)
    {
        printf("ary[%d] : ", i);
        scanf("%d", &ary[i]);
    }

    suffle(ary, cnt);

    printf("�迭�� ��� ��Ҹ� �������ϴ�.\n");
    for(int i=0; i<cnt; i++)
        printf("ary[%d] : %d\n", i, ary[i]);

    free(ary);

    return 0;    
}