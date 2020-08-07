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
void InsertFront(List *list, const Member *x)
{
    Node *ptr = list->head;
    list->head = list->crnt = AllocNode();
    SetNode(list->head, x, ptr);
}

//������ ��带 ����
void InsertRear(List *list, const Member *x)
{
    if(list->head == NULL)      //��� �ִ� ���
        InsertFront(list, x);   //�Ӹ��� ����
    else{
        Node *ptr = list->head;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = list->crnt = AllocNode();
        SetNode(ptr->next, x, NULL);
    }
}

//�Ӹ� ��带 ����
void RemoveFront(List *list)
{
    if(list->head != NULL)
    {
        Node *ptr = list->head->next;   //�� ��° ��忡 ���� ������
        free(list->head);               //�Ӹ� ��带 ����
        list->head = list->crnt = ptr;  //���ο� �Ӹ� ���   
    }
}

//���� ��带 ����
void RemoveRear(List *list)
{
    if(list->head != NULL)
    {
        if((list->head)->next == NULL)  //��尡 1���� �ִ� ���
            removeFront(list);          //�Ӹ� ��带 ����
        else
        {
            Node *ptr = list->head;
            Node *pre;
            while(ptr->next != NULL)
            {
                pre = ptr;
                ptr = ptr->next;
            }
            pre->next = NULL;   //pre�� ���� ���κ��� �� ��° ���
            free(ptr);          //ptr�� ���� ���
            list->crnt = pre;
        }
    }
}

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