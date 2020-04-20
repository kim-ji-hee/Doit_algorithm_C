//int형 큐 IntQueue(소스)
#include <stdio.h>
#include <stdlib.h>
#include "IntQueue.h"

//큐 초기화
int Initialize(IntQueue *q, int max)
{
    q->num = q->front = q->rear = 0;
    if((q->que = calloc(max, sizeof(int))) == NULL) //배열 생성에 실패
    {
        q->max 0;
        return -1;
    }

    q->max = max;
    return 0;
}

//큐에 데이터를 인큐
int Enque(IntQueue *q, int x)
{
    if(q->num >= q->max)
      return -1;    //큐가 가득 참
    else {
        q->num++;
        q->que[q->rear++] = x;
        if(q->rear == q->max)
          q->rear = 0;

        return 0;
    }
}

//큐에서 데이터를 디큐
int Deque(IntQueue *q, int *x)
{
    if(q->num <= 0) //큐는 비어 있음
      return -1;
    else {
        q->num--;
        *x = q->que[q->front++];
        if(q->front == q->max)
          q->front = 0;

        return 0;
    }
}