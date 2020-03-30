#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

//year���� �����ΰ�?
int isleap(int year)
{
    return (year%4==0 && year%100!=0 || year%400==0);
}

Date DateOf(int y, int m, int d)
{
    Date a;
    a.y = y;
    a.m = m;
    a.d = d;

    return a;
}

//��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date After(Date x, int n)
{
    if(n + x.d  > mdays[isleap(x.y)][x.m - 1])
    {
        x.m++;
        if(x.m > 12)
        {
            x.m = 1;
            x.y++;
        }
        n -= mdays[isleap(x.y)][x.m - 1] - x.d;

        while(n > mdays[isleap(x.y)][x.m - 1])
        {
            x.m++;
            if(x.m > 12)
            {
                x.m = 1;
                x.y++;
            }
            n -= mdays[isleap(x.y)][x.m - 1];
        }
    }

    x.d = n;

    return x;
}


//��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date Before(Date x, int n)
{
    if(x.d - n <= 0)
    {
        x.m--;
        if(x.m < 1)
        {
            x.m = 12;
            x.y--;
        }
        n -= x.d;

        while(n > mdays[isleap(x.y)][x.m - 1])
        {
            x.m--;
            if(x.m < 1)
            {
                x.m = 12;
                x.y--;
            }
            n -= mdays[isleap(x.y)][x.m - 1];
        }
    }

    x.d = mdays[isleap(x.y)][x.m - 1] - n;

    return x;
}