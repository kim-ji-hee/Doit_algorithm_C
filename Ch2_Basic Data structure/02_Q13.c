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
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
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
	if (n + x.d > mdays[isleap(x.y)][x.m - 1])
	{
		x.m++;
		if (x.m > 12)
		{
			x.m = 1;
			x.y++;
		}

		n -= mdays[isleap(x.y)][x.m - 1] - x.d;

		while (n > mdays[isleap(x.y)][x.m - 1])
		{
			x.m++;
			if (x.m > 12)
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
	if (x.d - n <= 0)
	{
		x.m--;
		if (x.m < 1)
		{
			x.m = 12;
			x.y--;
		}
		n -= x.d;

		while (n > mdays[isleap(x.y)][x.m - 1])
		{
			x.m--;
			if (x.m < 1)
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

void print_date(Date x)
{
	char *ws[] = { "��","��","ȭ","��","��","��","��" };
	if (x.m == 1 || x.m == 2)
	{
		x.y--;
		x.m += 12;
	}
	printf("%04d�� %02d�� %02d��(%s)", x.y, x.m, x.d, ws[(x.y + x.y / 4 - x.y / 100 + x.y / 400 + (13 * x.m + 8) / 5 + x.d) % 7]);
}

int main(void)
{
	int y, m, d;
	int a, b;
	Date x;

	printf("��¥�� �Է��ϼ���.\n");
	printf("�� : "); scanf("%d", &y);
	printf("�� : "); scanf("%d", &m);
	printf("�� : "); scanf("%d", &d);

	x = DateOf(y, m, d);

	printf("��ĥ ���� ��¥�� ���ұ��? : ");
	scanf("%d", &a);
	printf("%d�� ���� ��¥ : ", a);
	print_date(Before(x, a)); printf("\n");

	printf("��ĥ ���� ��¥�� ���ұ��? : ");
	scanf("%d", &b);
	printf("%d�� ���� ��¥ : ", b);
	print_date(After(x, b)); printf("\n");

	return 0;
}