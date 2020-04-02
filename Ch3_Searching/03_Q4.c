#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nx, ky;
	int pl, pr, pc;
	int *x;

	printf("입력할 요소의 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	printf("%d 개의 요소 오름차순으로 입력 \n", nx);
    printf("x[0] : ");
    scanf("%d", &x[0]);

    for(int i=1; i<nx; i+)
    {
        do
        {
            printf("x[%d] : ",i);
            scanf("%d", &x[i]);
        } while(x[i] < x[i-1]);        
    }

	printf("찾을 요소 : ");
	scanf("%d", &ky);

	printf(" |");
	for (int i = 0; i < nx; i++)
		printf(" %d", i);
	printf("\n-+");
	for (int i = 0; i < nx; i++)
		printf("--");
	printf("\n");

	pl = 0;
	pr = nx - 1;

	while (pl <= pr)
	{
		pc = (pl + pr) / 2;
		printf(" |");
		for (int i = 0; i < pl * 2 + 1; i++)
			printf(" ");
		printf("<");
		for (int i = 0; i < (pc - pl) * 2-1; i++)
			printf(" ");
		printf("+");
		for (int i = 0; i < (pr - pc) * 2-1; i++)
			printf(" ");
		printf(">\n");

		printf("%d|", pc);
		for (int i = 0; i < nx; i++)
		{
			printf("%2d", x[i]);
		}
		printf("\n");
		if (x[pc] == ky)
			break;
		else if (x[pc] > ky)
			pr = pc - 1;
		else
			pl = pc + 1;
		printf(" |\n");
	}
	printf("%d는 x[%d]에 있습니다.\n", ky, pc);

	free(x);

	system("pause");

	return 0;
}