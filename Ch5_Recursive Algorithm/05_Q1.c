#include <stdio.h>

int main(void)
{
    int n=1, x;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        n *= (x-i);
    }
    printf("%d�� �������� ���� %d�Դϴ�.\n", x, n);

    return 0;
}