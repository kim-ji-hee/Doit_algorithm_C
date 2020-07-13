//힙 정렬 프로그램
#include <stdio.h>
#include <stdlib.h>

#define swap (type, x, y) do { type t=x; x=y; y=t; } while(0)

//a[left] ~ a[right]를 힙으로 만드는 함수
static void downheap (int a[], int left, int right)
{
    int temp = a[left]; //루트
    int child, parent;
    for(parent = left; parent < (right + 1) / 2; parent = child)
    {
        int cl = parent * 2 + 1;    //왼쪽자식
        int cr = cl + 1;            //오른쪽자식
        child = (cr <= right && a[cr] > a[cl]) ? cr : cl;   //큰 값을 선택함
        if(temp >= a[child])
            break;
        a[parent] = a[child];
    }
    a[parent] = temp;
}

//힙 정렬 함수
void heapsort(int a[], int n)
{
    for(int i = (n-1)/2; i>=0; i--)
      downheap(a, i, n-1);
    for(int i = n-1; i>0; i--)
    {
        swap(int, a[0], a[i]);
        downheap(a, 0, i-1);
    }
}

int main(void)
{
    int nx, *x;
    printf("힙 정렬\n");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for(int i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    heapsort(x, nx);
    printf("오름차순으로 정렬했습니다.\n");
    for(int i = 0; i < nx; i++)
      printf("x[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}