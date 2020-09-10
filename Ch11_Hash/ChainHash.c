//�ǽ� 11-4
//ü�ι����� ������ �ؽ�(�ҽ�)
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ChainHash.h"

//�ؽ� �Լ�(key�� �ؽ� ���� ��ȯ)
static int hash(int key, int size)
{
    return key % size;  //ȸ�� ��ȣ�� Ű(key), �ؽ� ���̺��� ũ�� size�� ���� �������� ��ȯ
}

//����� �� ����� ���� ����
static void SetNode(Node *n, const Member *x, const Node *next)
{
    n->data = *x;    //������
    n->next = next;  //���� ��忡 ���� ������
}

//�ؽ� ���̺� �ʱ�ȭ
int Initialize(ChainHash *h, int size)
{
    if((h->table = calloc(size, sizeof(Node *))) == NULL)
    {
        h->size = 0;
        return 0;
    }
    h->size = size;
    for(int i = 0; i < size; i++)   //��� ��Ŷ�� ����(NULL) ���·� ����ϴ�
        h->table[i] = NULL;
    return 1;
}
