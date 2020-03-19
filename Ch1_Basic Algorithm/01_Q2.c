#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if(b<min) min=b;
    if(c>min) min=c;
    return min;
}

int main()
{
    printf("min3(%d, %d, %d) = %d\n",2,3,4,min3(2,3,4));
    return 0;    
}