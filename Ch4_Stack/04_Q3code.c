#include <stdio.h>
#include <stdlib.h>
#include "04_Q3.h"

int Initialize(ArryaIntQueue *q, int max)
{
    q->num = 0;
    if((q->que = calloc(max, sizeof(int))) == NULL)
    {
        s->max = 0;
        return -1;
    }
    q->max = max;
    return 0;
}

int Enque(ArryaIntQueue *q, int x)
{
    if(q->num >= q->max)
        return -1;  //큐가 가득 참
    else{
        q->que[q->num++] = x;
        return 0;
    }
}

int Deque(ArryaIntQueue *q, int *x)
{
    if(q->num <= 0)
        return -1;
    else {
        *x = q->que[0];
        for(int i=0; i<q->num-1; i++)
            q->que[i] = q->que[i+1];
        q->num--;
        return 0;
    }
}

int Peek(const ArryaIntQueue *q, int *x)
{
    if(q->num <= 0) //큐가 비어 있음
        return -1;
    *x = q->que[0];
    return 0;
}

void Clear(ArryaIntQueue *q)
{
    q->num = 0;
}

int Capacity(const ArryaIntQueue *q)
{
    return q->max;
}

int Size(const ArryaIntQueue *q)
{
    return q->num;
}

int IsEmpty(const ArryaIntQueue *q)
{
    return q->num <= 0;
}

int IsFull(const ArryaIntQueue *q)
{
    return q->num >= q->max;
}

int Search(const ArryaIntQueue *q, int x)
{
    for(int i = 0; i < q->num; i++)
    {
        if(q->que[i] == x)
            return i;   //검색 성공
    }
    return -1;
}

void Print(const ArryaIntQueue *q)
{
    for(int i=0; i<q->num; i++)
        printf("%d ", q->que[i]);
    printf("\n");
}

void Terminate(ArryaIntQueue *q)
{
    if(q->que != NULL)
        free(q->que);
    q->max = q->num = 0;
}
