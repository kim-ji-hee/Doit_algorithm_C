#ifndef __ArrayIntQueue
#define __ArrayIntQueue

typedef struct {
    int max;    //큐의 용량
    int num;    //현재 데이터 수
    int *que;   //큐의 첫 요소에 대한 포인터
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