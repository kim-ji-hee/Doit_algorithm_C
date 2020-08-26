//Ŀ���� ���� ���� ����Ʈ(���)
#ifndef ___ArrayLinkedList
#define ___ArrayLinkedList

#include "Member.h"     //�ǽ� 11-1���� �ۼ�

#define Null -1     //�� Ŀ��

typedef int Index;  //Ŀ���� �ڷ���

//���
typedef struct {
    Member data;    //������
    Index next;     //���� ���
    Index Dnext;    //���� ����Ʈ�� ���� ���
} Node;

//���� ����Ʈ
typedef struct {
    Node *n;        //����Ʈ ��ü(�迭)
    Index head;     //�Ӹ� ���
    Index max;      //��� ���� ���� ���ڵ�
    Index deleted;  //���� ����Ʈ�� �Ӹ� ���
    Index crnt;     //������ ���
} List;

//���� ����Ʈ�� �ʱ�ȭ(���� ū ��� ������ size)
void Initialize(List *list, int size);

//�Լ� compare�� x�� ���� ��带 �˻�
Index search(List *list, const Member *x, int compare(const Member *x, const Member *y));

//�Ӹ��� ��带 ����
void InsertFront(List *list, const Member *x);

//������ ��带 ����
void InsertRear(List *list, const Member *x);

//�Ӹ� ��带 ����
void RemoveFront(List *list);

//���� ��带 ����
void RemoveRear(List *list);

//������ ��带 ����
void RemoveRurrent(List *list);

//��� ��带 ����
void Clear(List *list);

//������ ����� �����͸� ���
void PrintCurrent(const List *list);

//������ ����� �����͸� ���(�� �ٲ� ���� �߰�)
void PrintLnCurrent(const List *list);

//��� ����� �����͸� ���
void Print(const List *list);

//���� ����Ʈ ����
void Terminate(List *list);

#endif