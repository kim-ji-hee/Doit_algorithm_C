//��Ʈ ���Ϳ� ���� ���� ���� ����(�ҽ�)
#include <stdio.h>
#include "BitSet.h"

//���� s�� n�� �ִ� �� Ȯ��
int IsMember(BitSet s, int n)
{
    return s & SetOf(n);    //���� ����
}

//���� s�� n�� �߰�
void Add(BitSet *x, int n)
{
    *s |= SetOf(n);         //���� ����
}

//���� s���� n�� ����
void Remove(BitSet *s, int n)
{
    *s &= ~SetOf(n);
}

//���� s�� ���� ������ ��ȯ
int Size(BitSet s)
{
    int n = 0;
    for(; s!=BitSetNull; n++)
      s &= s - 1;
    return n;
}

//���� s�� ��� ���Ҹ� ���
void Print(BitSet s)
{
    printf("{");
    for(int i = 0; i < BitSetBits; i++)
        if(IsMember(s, i))
            printf("%d ", i);
    printf("}");
}

//���� s�� ��� ���Ҹ� ���(�� �ٲ� ���� ����)
void PrintLn(BitSet s)
{
    Print(s);
    printf("\n");
}
