#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int *a; //�迭�� ù ��° ����� ������
    int na; //�迭 a�� ��� ����

    printf("��� ���� : ");
    scanf("%d", &na);
    a = calloc(na, sizeof(int));    //��� ������ na�� int�� �迭�� ����

    if(a == NULL)
        puts("�޸� Ȯ���� �����߽��ϴ�.");
    else
    {
        printf("%d���� ������ �Է��ϼ���.\n",na);
        for(i = 0; i < na; i++)
        {
            printf("a[%d] : ",i);
            scanf("%d",&a[i]);
        }
        printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
        for(i = 0; i < na; i++)
            printf("a[%d] : %d", i, a[i]);
        
        free(a);
    }

    return 0;
}