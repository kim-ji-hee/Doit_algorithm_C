#include <stdio.h>

int sumof(int a, int b)
{
    int i, sum=0;
    if(a<b)
    {
        for(i = a; i<=b; i++)
        {
            sum += i;
        }
    }
    else 
    {
        for(i = b; i<=a; i++)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int a, b, sum;
    printf("�� ������ ������ �Է��ϼ���\n");
    scanf("%d %d", a ,b);
    sum = sumof(a, b);
    printf("�� �� ���� ������ ���� %d �Դϴ�.\n", sum);

    return 0;
}