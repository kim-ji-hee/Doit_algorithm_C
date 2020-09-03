//���� ���� ���� ����Ʈ(�ҽ�)
#include <stdio.h>
#include <stdlib.h>
#include "CircDblLinkedList.h"

//1���� ��带 �������� ����
static Dnode *AllocDNode (void)
{
    return calloc(1, sizeof(Dnode));
}

//����� �� ��� ���� ����
static void SetDNode (DNode *n, const Member *x, const Dnode *prev, const Dnode *next)
{
    n->data = *x;   //������
    n->prev = prev; //���� ��忡 ���� ������
    n->next = next; //���� ��忡 ���� ������
}

//����Ʈ�� ��� �ִ��� �˻�
static int IsEmpty (const Dlist *list)
{
    return list->head->next == list->head;
}

//����Ʈ�� �ʱ�ȭ
void Initialisze(Dlist *list)
{
    Dnode *dummyNode = AllocDNode();    //���� ��� ����
    list->head = list->crnt = dummyNode;
    dummyNode->prev = dummyNode->next = dummyNode;
}

//������ ����� �����͸� ���
void PrintCurrent(const Dlist *list)
{
    if(IsEmpty(list))
        printf("������ ��尡 �����ϴ�.");
    else
        PrintMember(&list->crnt->data);
}

//������ ����� �����͸� ���(�� �ٲ� ���� �߰�)
void PrintLnCurrent(const Dlist *list)
{
    PrintCurrent(list);
    printf("\n");
}

//compare �Լ��� x�� ��ġ�ϴ� ��带 �˻�
Dnode *search(Dlist *list, const Member *x, int compare(const Member *x, const Member *y))
{
	Dnode *ptr = list->head->next;
	while (ptr != list->head) {
		if (compare(&ptr->data, x) == 0) {
			list->crnt = ptr;
			return ptr;                 /* �˻� ���� */
		}
		ptr = ptr->next;
	}
	return NULL;                        /* �˻� ���� */
}

//��� ����� �����͸� ����Ʈ ������� ���
void Print(const Dlist *list);

//��� ����� �����͸� ����Ʈ ������ �������� ���
void PrintReverse(const Dlist *list);

//������ ����� �������� ����
int Next(Dlist *list);

//������ ����� �������� ����
int Prev(Dlist *list);

//p�� ����Ű�� ��� �ٷ� �ڿ� ��带 ����
void InsertFront(Dlist *list, const Member *x);

//������ ��带 ����
void InsertRear(Dlist *list, const Member *x);

//p�� ����Ű�� ��带 ����
void Remove(Dlist *list, Dnode *p);

//�Ӹ� ��带 ����
void RemoveFront(Dlist *list);

//���� ��带 ����
void RemoveRear(Dlist *list);

//������ ��带 ����
void RemoveCurrent(Dlist *list);

//��� ��带 ����
void Clear(Dlist *list);

//���� ���� ���� ����Ʈ ����
void Terminate(Dlist *list);