#include <stdio.h>

int main(void)
{
    int n, digit=0;
    
    do{
        puts("���� ������ �Է��ϼ���: ");
        scanf("%d", &n);
    } while(n<=0);
    
    do {
        digit++;
    } while(n/10 != 0);

    printf("�� ���� %d �ڸ��Դϴ�.\n", digit);

    return 0;
}