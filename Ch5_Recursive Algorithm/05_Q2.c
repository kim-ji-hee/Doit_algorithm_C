#include <stdio.h>

int gcd(int x, int y)
{
    while(y != 0)
    {
        int temp;
        tmep = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(void)
{
    int x, y;
    printf("�� ������ �ִ������� ���մϴ�.\n");
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &x);
    printf("������ �Է��ϼ��� : ");
    scnaf("%d", &y);
    printf("�ִ������� %d�Դϴ�.\n", gcd(x,y));

    return 0;
}