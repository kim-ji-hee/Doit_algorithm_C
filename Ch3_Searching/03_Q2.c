#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, nx, key;
	int *x;
	printf("�Է��� ���� ����: ");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));
	printf("%d���� ���Ҹ� �Է��ϼ���\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("ã������ ���� �Է� : \n");
	scanf("%d", &key);

	printf("  |");
	for (i = 0; i < nx; i++)
		printf(" %d", i);
	printf("\n");

	printf("-+");
	for (i = 0; i < nx; i++)
		printf("---");
	printf("\n");

	for (i = 0; i < nx; i++)
	{
		printf(" |");
		for (int k = 0; k < i * 2 + 1; k++)
			printf(" ");
		printf("*\n");

		printf("%d|", i);
		for (int j = 0; j < nx; j++)
			printf(" %d", x[j]);
		printf("\n");

		if (x[i] == key)
			break;

		printf(" |\n");
	}
	if (i == nx)
		printf("�˻��� �����߽��ϴ�.\n");
	else
		printf("%d�� x[%d]�� �����մϴ�.\n", key, i);

	free(x);

	system("pause");

	return 0;
}