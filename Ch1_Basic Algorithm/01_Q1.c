#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    int max = a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    return max;
}

int main()
{
    printf("max4(%d, %d, %d, %d) = %d\n",2,3,4,1,max4(2,3,4,1));
    return 0;    
}