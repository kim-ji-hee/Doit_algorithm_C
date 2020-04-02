#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[])
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			idx[j] = i;
			j++;
		}
	}
	return j;
}
//int search_idx(const int a[], int n, int key, int idx[])
//{
//	int i, count = 0;
//
//	for (i = 0; i < n; i++)
//		if (a[i] == key)
//			idx[count++] = i;
//	return count;
//}

int main(void)
{
	int nx, ky, no;
	int *x, *y;
	printf("요소의 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	y = calloc(nx, sizeof(int));
	printf("%d개의 요소 입력 : \n", nx);
	for (int i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("찾을 요소 : ");
	scanf("%d", &ky);

	no = search_idx(x, nx, ky, y);
	printf("찾은 요소의 개수 : ");
	printf("%d 개\n", no);

	for (int i = 0; i < no; i++)
	{
		printf("x[%d]\n", y[i]);
	}

	free(x);
	free(y);

	system("pause");
	return 0;
}