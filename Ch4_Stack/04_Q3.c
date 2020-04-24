#include <stdio.h>
#include "04_Q3.h"

int main(void)
{
    ArrayIntQueue que;

    if(Initialize(&que, 64) == -1)
    {
        printf("큐의 생성에 실패하였습니다.\n");
        return 1;
    }

    while(1)
    {
        int menu, x, idx;

        printf("현재 데이터 수 : %d / %d \n", Size(&que), Capacity(&que));
        prinf("(1)인큐 (2)디큐 (3)피크 (4)출력 (5)검색 (6)비우기 (7)빈 상태/가득 찬 상태 (0)종료 : ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch(menu)
        {
            case 1 : //인큐
                printf("데이터 : ");
                scanf("%d", &x);
                if(Enque(&que, x) == -1)
                    printf("\a오류 : 인큐에 실패했습니다.\n");
                break;

            case 2 : //디큐
                if(Deque(&que, &x) == -1)
                    printf("\a오류 : 디큐에 실패했습니다.\n");
                else
                    printf("디큐한 데이터는 %d 입니다.\n", x);
                break;

            case 3 : //피크
                if(Peek(&que, &x) == -1)
                    printf("\a오류 : 피크에 실패했습니다.\n");
                else
                    printf("피크한 데이터는 %d 입니다.\n", x);
                break;

            case 4 : //출력
                Prinf(&que);
                break;

            case 5 : //검색
                printf("검색 데이터 : ");
                scanf("%d", &x);
                idx = Search(&que, x);
                if(idx == -1)
                    printf("\a오류 : 검색에 실패했습니다.\n");
                else
                    printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
                break;

            case 6 : //클리어
                Clear(&que);
                break;

            case 7 : //빈 상태 / 가득 찬 상태 판단
                printf("큐가 비어 있%s.\n", IsEmpty(&que) ? "습니다" : "지 않습니다");
                printf("큐가 가득 %s.\n", IsFull(&que) ? "찼습니다" : "차지 않았습니다");
                break;

        }
    }

    Terminate(&que);

    return 0;
}