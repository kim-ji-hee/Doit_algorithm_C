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

//year년이 윤년인가?
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

//날짜 x의 n일 뒤의 날짜를 반환하는 함수
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


//날짜 x의 n일 앞의 날짜를 반환하는 함수
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
	char *ws[] = { "일","월","화","수","목","금","토" };
	if (x.m == 1 || x.m == 2)
	{
		x.y--;
		x.m += 12;
	}
	printf("%04d년 %02d월 %02d일(%s)", x.y, x.m, x.d, ws[(x.y + x.y / 4 - x.y / 100 + x.y / 400 + (13 * x.m + 8) / 5 + x.d) % 7]);
}

int main(void)
{
	int y, m, d;
	int a, b;
	Date x;

	printf("날짜를 입력하세요.\n");
	printf("년 : "); scanf("%d", &y);
	printf("월 : "); scanf("%d", &m);
	printf("일 : "); scanf("%d", &d);

	x = DateOf(y, m, d);

	printf("며칠 앞의 날짜를 구할까요? : ");
	scanf("%d", &a);
	printf("%d일 앞의 날짜 : ", a);
	print_date(Before(x, a)); printf("\n");

	printf("며칠 뒤의 날짜를 구할까요? : ");
	scanf("%d", &b);
	printf("%d일 뒤의 날짜 : ", b);
	print_date(After(x, b)); printf("\n");

	return 0;
}