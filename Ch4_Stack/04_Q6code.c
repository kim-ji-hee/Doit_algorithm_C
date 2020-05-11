#include <stdio.h>
#include <stdlib.h>
#include "04_Q6.h"

//�� �ʱ�ȭ
int Initialize(IntDequeue *q, int max)
{
    q->num = q->front = q->rear = 0;
    if((q->que = calloc(max, sizeof(int))) == NULL) //�迭 Ȯ�� ����
    {
        q->max = 0;
        retrurn -1;
    }
    q->max = max;
    return 0;
}

//�� ���� �����͸� ��ť
int EnqueFront(IntDequeue *q, int x)
{
    if(q->num >= q->max)    //ť�� ���� ��
        return -1;
    else {
        q->num++;
        if(--q->front < 0)
            q->front = q->max - 1;
        q->que[q->front] = x;
        return 0;
    }
}

//�� ���� �����͸� ��ť
int EnqueRear(IntDequeue *q, int x)
{
    if(q->num >= q->max)    //ť�� ���� ��
        return -1;
    else {
        q->num++;
        q->que[q->rear++] = x;
        if(q->rear == q->max)
            q->rear = 0;
        return 0;
    }
}

//�� ���� �����͸� ��ť
int DequeFront(IntDequeue *q, int *x)
{
    if(q->num <= 0)     //ť�� ��� ����
        return -1;
    else {
        q->num--;
        *x = q->que[q->front++];
        if(q->front == q->max)
            q->front = 0;
        return 0;
    }
}

//�� ���� �����͸� ��ť
int DequeRear(IntDequeue *q, int *x)
{
    if(q->num <= 0)     //ť�� ��� ����
        return -1;
    else {
        q->num--;
        if(--q->rear < 0)
            q->rear = q->max - 1;
        *x = q->que[q->rear];
        return 0;
    }
}

//�� ���� �����͸� ��ũ
int PeekFront(const IntDequeue *q, int *x)
{
    if(q->num <= 0)
        return -1;
    *x = q->que[q->front];
    return 0;
}

//�� ���� �����͸� ��ũ
int PeekRear(const IntDequeue *q, int *x)
{
    if(q->num <= 0)
        return -1;
    *x = q->que[q->rear];
    return 0;
}

//��� ������ ����
void Clear(IntDequeue *q)
{
    q->num = q->front = q->rear = 0;
}

//ť�� �ִ� �뷮
int Capacity(const IntDequeue *q)
{
    return q->max;
}

//ť�� ����� �������� ��
int Size(const IntDequeue *q)
{
    return q->num;
}

//ť�� ��� �ִ��� Ȯ��
int IsEmpty(const IntDequeue *q)
{
    return q->num <= 0;
}

//ť�� ���� á���� Ȯ��
int IsFull(const IntDequeue *q)
{
    return q->num >= q->max;
}

//ť �˻�
int Search(const IntDequeue *q, int x)
{
    int i, idx;

    for(i = 0; i<q->num; i++)
    {
        if(q->que[idx = (i+q->front)%q->max] == x)
            return idx; //�˻� ����
    }
    return -1;
}

//ť �˻�(���� �˻�)
int Search2(const IntDequeue *q, int x)
{
    int i;
    for(i = 0; i<q->num; i++)
    {
        if(q->que[(i+q->front)%q->max] == x)
            return i;
    }
    return -1;
}

//��ü ������ ���
void Print(const IntDequeue *q)
{
    int i;
    for(i = 0; i<q->num; i++)
        printf("%d ", q->que[(i+q->front)%q->max]);
    printf("\n");
}

//ť ����
void Terminate(IntDequeue *q)
{
    if(q->que != NULL)
        free(q->que);
    q->max = q->num = q->front = q->rear = 0;
}