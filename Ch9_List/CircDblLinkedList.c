//원형 이중 연결 리스트(소스)
#include <stdio.h>
#include <stdlib.h>
#include "CircDblLinkedList.h"

//1개의 노드를 동적으로 생성
static Dnode *AllocDNode (void)
{
    return calloc(1, sizeof(Dnode));
}

//노드의 각 멤버 값을 설정
static void SetDNode (DNode *n, const Member *x, const Dnode *prev, const Dnode *next)
{
    n->data = *x;   //데이터
    n->prev = prev; //앞쪽 노드에 대한 포인터
    n->next = next; //다음 노드에 대한 포인터
}

//리스트가 비어 있는지 검사
static int IsEmpty (const Dlist *list)
{
    return list->head->next == list->head;
}

//리스트를 초기화
void Initialisze(Dlist *list)
{
    Dnode *dummyNode = AllocDNode();    //더미 노드 생성
    list->head = list->crnt = dummyNode;
    dummyNode->prev = dummyNode->next = dummyNode;
}

//선택한 노드의 데이터를 출력
void PrintCurrent(const Dlist *list)
{
    if(IsEmpty(list))
        printf("선택한 노드가 없습니다.");
    else
        PrintMember(&list->crnt->data);
}

//선택한 노드의 데이터를 출력(줄 바꿈 문자 추가)
void PrintLnCurrent(const Dlist *list)
{
    PrintCurrent(list);
    printf("\n");
}

//compare 함수로 x와 일치하는 노드를 검색
Dnode *search(Dlist *list, const Member *x, int compare(const Member *x, const Member *y))
{
	Dnode *ptr = list->head->next;
	while (ptr != list->head) {
		if (compare(&ptr->data, x) == 0) {
			list->crnt = ptr;
			return ptr;                 /* 검색 성공 */
		}
		ptr = ptr->next;
	}
	return NULL;                        /* 검색 실패 */
}

//모든 노드의 데이터를 리스트 순서대로 출력
void Print(const Dlist *list);

//모든 노드의 데이터를 리스트 순서와 역순으로 출력
void PrintReverse(const Dlist *list);

//선택한 노드의 다음으로 진행
int Next(Dlist *list);

//선택한 노드의 앞쪽으로 진행
int Prev(Dlist *list);

//p가 가리키는 노드 바로 뒤에 노드를 삽입
void InsertFront(Dlist *list, const Member *x);

//꼬리에 노드를 삽입
void InsertRear(Dlist *list, const Member *x);

//p가 가리키는 노드를 삭제
void Remove(Dlist *list, Dnode *p);

//머리 노드를 삭제
void RemoveFront(Dlist *list);

//꼬리 노드를 삭제
void RemoveRear(Dlist *list);

//선택한 노드를 삭제
void RemoveCurrent(Dlist *list);

//모든 노드를 삭제
void Clear(Dlist *list);

//원형 이중 연결 리스트 종료
void Terminate(Dlist *list);