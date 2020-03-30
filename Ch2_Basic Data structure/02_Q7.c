#include <stdio.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

int card_convr(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;

    if(x == 0)
    {
        printf("   %7d\n", x);
        d[digits++] = dchar[0];
    }
    else
        while(x)
        {
            printf("2| %7d ---%c\n", x,dchar[x % n]);
            printf(" +----------\n");
            d[digits++] = dchar[x % n];
            x /= n;
        }

    for(int i=0; i<digits/2; i++)
        swap(char, d[i], d[digits - i - 1]);

    return digits;
}

int main(void)
{
    unsigned no;
    int cd, dno;
    char cno[512];
    int retry;
    puts("10������ ��� ��ȯ�մϴ�.\n");
    do
    {
        printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
        scanf("%u", &no);
        do {
            printf("� ������ ��ȯ�ұ��? (2-36) : ");
            scanf("%d", &cd);
        } while(cd < 2 || cd > 36);

        dno = card_convr(no, cd, cno);

        printf("%d ������ ", cd);
        for(int i=0; i<dno; i++)
            printf("%c", cno[i]);
        printf("�Դϴ�.\n");

        printf("�� �� �� �ұ��? ( 1-�� / 0-�ƴϿ� ) : ");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}