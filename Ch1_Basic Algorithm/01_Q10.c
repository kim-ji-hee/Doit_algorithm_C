#include <stdio.h>

int main(void)
{
    int n, a, b, sum;

    puts("���̸� ���� ������ �Է��ϼ���");
    printf("a�� ��: ");
    scanf("%d", &a);
    printf("b�� ��: ");
    scanf("%d", &b);
    if(a>=b)
    {
        do {        
            printf("a���� ū ���� �Է��ϼ���!\n");
            printf("b�� ��: ");
            scanf("%d", &b);
        } while(a>=b);
    }
    else
        printf("b-a�� %d �Դϴ�.\n",b-a);
    
    return 0;
}
    