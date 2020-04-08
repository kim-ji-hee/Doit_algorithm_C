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
	long *x; //배열의 첫 번째 요소에 대한 포인터
	long *p; //검색한 요소에 대한 포인터
	puts("bsearch 함수를 사용하여 검색");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));
	printf("내림차순으로 %d 개의 요소를 입력하세요.\n", nx);
	printf("x[0] : ");
	scanf("%ld", &x[0]);
	for (int i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%ld", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("검색 값 : ");
	scanf("%ld", &ky);
	p = bsearch(&ky, x, nx, sizeof(long),
				(int(*)(const void *, const void *)) long_cmpr
			    );
		if (p == NULL)
			printf("검색에 실패했습니다.\n");
		else
			printf("%ld는(은) x[%d]에 있습니다.\n", ky, (int)(p - x));

		free(x);
		system("pause");
        
		return 0;
}