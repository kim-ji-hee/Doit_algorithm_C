#ifndef __ArrayIntQueue
#define __ArrayIntQueue

typedef struct {
    int max;    //ť�� �뷮
    int num;    //���� ������ ��
    int *que;   //ť�� ù ��ҿ� ���� ������
} ArrayIntQueue;

int Initialize(ArryaIntQueue *q, int max);

int Enque(ArryaIntQueue *q, int x);

int Deque(ArryaIntQueue *q, int *x);

int Peek(const ArryaIntQueue *q, int *x);

void Clear(ArryaIntQueue *q);

int Capacity(const ArryaIntQueue *q);

int Size(const ArryaIntQueue *q);

int IsEmpty(const ArryaIntQueue *q);

int IsFull(const ArryaIntQueue *q);

int Search(const ArryaIntQueue *q, int x);

void Print(const ArryaIntQueue *q);

void Terminate(ArryaIntQueue *q);

#endif