//�����ͷ� ���� ���� ����Ʈ(�ҽ�)
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "LinkedList.h"

//��带 �������� ����
static Node *AllocNode(void)
{
    return calloc(1, sizeof(Node));
}

//n�� ����Ű�� ����� �� ����� ���� ����
static void SetNode(Node *n, const Member *x, const Node *next)
{
    n->data = *x;       //������
    n->next = next;     //���� ������
}

//���� ����Ʈ�� �ʱ�ȭ
void Initialize(List *list)
{
    list->head = NULL;  //�Ӹ� ���
    list->crnt = NULL;  //������ ���
}

//�Լ� compare�� x�� ���� ��带 �˻�
Node *search(List *list, const Member *x, int compare(const Member *x, const Member *y))
{
    Node *ptr = list->head;
    while(ptr != NULL)
    {
        if(compare(&ptr->data, x) == 0)
        {
            list->crnt = ptr;
            return ptr;     //�˻� ����
        }
        ptr = ptr->next;    //���� ��带 ����
    }
    return NULL;            //�˻� ����
}

//�Ӹ��� ��带 ����
void InsertFront(List *list, const Member *x);

//������ ��带 ����
void InsertRear(List *list, const Member *x);

//�Ӹ� ��带 ����
void RemoveFront(List *list);

//���� ��带 ����
void RemoveRear(List *list);

//������ ��带 ����
void RemoveCurrent(List *list);

//��� ��带 ����
void Clear(List *list);

//������ ����� �����͸� ���
void PrintCurrent(const List *list);

//������ ����� �����͸� ���(�� �ٲ� ���� ����)
void PrintLnCurrent(const List *list);

//��� ����� �����͸� ����Ʈ ������� ���
void Print(const List *list);

//���� ����Ʈ ����
void Terminate(List *list);