//포인터로 만든 연결 리스트(소스)
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "LinkedList.h"

//노드를 동적으로 생성
static Node *AllocNode(void)
{
    return calloc(1, sizeof(Node));
}

//n이 가리키는 노드의 각 멤버에 값을 설정
static void SetNode(Node *n, const Member *x, const Node *next)
{
    n->data = *x;       //데이터
    n->next = next;     //뒤쪽 포인터
}

//연결 리스트를 초기화
void Initialize(List *list)
{
    list->head = NULL;  //머리 노드
    list->crnt = NULL;  //선택한 노드
}

//함수 compare로 x와 같은 노드를 검색
Node *search(List *list, const Member *x, int compare(const Member *x, const Member *y))
{
    Node *ptr = list->head;
    while(ptr != NULL)
    {
        if(compare(&ptr->data, x) == 0)
        {
            list->crnt = ptr;
            return ptr;     //검색 성공
        }
        ptr = ptr->next;    //다음 노드를 선택
    }
    return NULL;            //검색 실패
}

//머리에 노드를 삽입
void InsertFront(List *list, const Member *x);

//꼬리에 노드를 삽입
void InsertRear(List *list, const Member *x);

//머리 노드를 삭제
void RemoveFront(List *list);

//꼬리 노드를 삭제
void RemoveRear(List *list);

//선택한 노드를 삭제
void RemoveCurrent(List *list);

//모든 노드를 삭제
void Clear(List *list);

//선택한 노드의 데이터를 출력
void PrintCurrent(const List *list);

//선택한 노드의 데이터를 출력(줄 바꿈 문자 포함)
void PrintLnCurrent(const List *list);

//모든 노드의 데이터를 리스트 순서대로 출력
void Print(const List *list);

//연결 리스트 종료
void Terminate(List *list);