#include <stdio.h>
#include <stdlib.h>

//�迭 b�� ��� ��Ҹ� �迭 a�� �����ϴ� �Լ� (n�� ��� ����)
void ary_copy(int a[], const int b[], int n)
{
    for (int i=0; i<n; i++)
        a[i] = b[i];
}

int main(void)
{
    int cnt;
    int *ary1;
    int *ary2;

    do
    {
        printf("�Է��� ����� ���� : ");
        scanf("%d", &cnt);
    } while(cnt <= 0);

    ary1 = calloc(cnt, sizeof(int));
    ary2 = calloc(cnt, sizeof(int));

    printf("%d���� ������ �Է��ϼ��� : ");
    for (int i=0; i<cnt; i++)
    {
        printf("ary[%d] : ", i);
        scanf("%d", &ary1[i]);
    }
    
    ary_copy(ary2, ary1, cnt);

    printf("�Է��� �迭�� ��� ��Ҹ� �����߽��ϴ�.\n");
    for(int i=0; i<cnt; i++)
        printf("ary2[%d] : %d\n", i, ary2[i]);

    free(ary1);
    free(ary2);

    return 0;
}