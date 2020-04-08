#include <stdio.h>
#include <stdlib.h>

int long_cmpr(const long *a, const long *b)
{
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int nx;
	long ky;
	long *x; //�迭�� ù ��° ��ҿ� ���� ������
	long *p; //�˻��� ��ҿ� ���� ������
	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));
	printf("������������ %d ���� ��Ҹ� �Է��ϼ���.\n", nx);
	printf("x[0] : ");
	scanf("%ld", &x[0]);
	for (int i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%ld", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("�˻� �� : ");
	scanf("%ld", &ky);
	p = bsearch(&ky, x, nx, sizeof(long),
				(int(*)(const void *, const void *)) long_cmpr
			    );
		if (p == NULL)
			printf("�˻��� �����߽��ϴ�.\n");
		else
			printf("%ld��(��) x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));

		free(x);
		system("pause");
        
		return 0;
}