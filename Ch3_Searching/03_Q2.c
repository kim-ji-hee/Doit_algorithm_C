#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, nx, key;
	int *x;
	printf("입력할 수의 개수: ");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));
	printf("%d개의 원소를 입력하세요\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("찾으려는 원소 입력 : \n");
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
		printf("검색에 실패했습니다.\n");
	else
		printf("%d은 x[%d]에 존재합니다.\n", key, i);

	free(x);

	system("pause");

	return 0;
}