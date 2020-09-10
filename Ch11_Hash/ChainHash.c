//실습 11-4
//체인법으로 구현한 해시(소스)
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ChainHash.h"

//해시 함수(key의 해시 값을 반환)
static int hash(int key, int size)
{
    return key % size;  //회원 번호가 키(key), 해시 테이블의 크기 size로 나눈 나머지를 반환
}

//노드의 각 멤버에 값을 설정
static void SetNode(Node *n, const Member *x, const Node *next)
{
    n->data = *x;    //데이터
    n->next = next;  //다음 노드에 대한 포인터
}

//해시 테이블 초기화
int Initialize(ChainHash *h, int size)
{
    if((h->table = calloc(size, sizeof(Node *))) == NULL)
    {
        h->size = 0;
        return 0;
    }
    h->size = size;
    for(int i = 0; i < size; i++)   //모든 버킷을 공백(NULL) 상태로 만듭니다
        h->table[i] = NULL;
    return 1;
}
