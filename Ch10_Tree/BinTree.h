//�����˻�Ʈ�� ���α׷�(���)
#ifndef ___BinTree
#define ___BinTree

#include "Member.h" //�ǽ� 11-1���� �ۼ�

//���
typedef struct __bnode {
    Member data;            //������
    struct __bnode *left;   //���� �ڽ� ��忡 ���� ������
    struct __bnode *right;  //������ �ڽ� ��忡 ���� ������
} BinNode;

//�˻�
BinNode *Search(BinNode *p, const Member *x);

//��� ����
BinNode *Add(BinNode *p, const Member *x);

//��� ����
int Remove(BinNode **root, const Member *x);

//��� ��带 ���
void PrintTree(const BinNode *p);

//��� ��带 ����
void FreeTree(BinNode *p);

#endif