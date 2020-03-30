#include <stdio.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

int card_convr(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;

    if(x == 0)
        d[digits++] = dchar[0];
    else
        while(x)
        {
            d[digits++] = dchar[x % n];
            x /= n;
        }
    
    for(int i=0; i<digits/2; i++)
        swap(char, d[i], d[digits - i - 1]);

    return digits;
}