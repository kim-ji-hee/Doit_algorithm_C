// 직사각형 출력
#include <stdio.h>

int main(void)
{
    int h, w;
    printf("직사각형을 출력합니다.\n");
    do {
        printf("높이 : ");
        scanf("%d",&h);
    } while(h<=0);

    do {
        printf("너비 : ");
        scanf("%d",&w);
    } while(w<=0);

    for(int i=0; i<=h; i++)
    {
        for(int j=0; j<=w; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}