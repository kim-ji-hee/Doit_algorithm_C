//int형 큐 IntQueue를 사용하는 프로그램
#include <stdio.h>
#include "실습 4-4.h"

int main(void)
{
    IntQueue que;

    if(Initialize(&que, 64) == -1)
    {
      printf("큐의 생성에 실패하였습니다.\n");
      return 1;
    }
    while(1)
    {
        int m, x, idx;
        printf("현재 데이터 수 : %d / %d \n", Size(&que), Capacity(&que));
        printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (5)모두 삭제  
                (6)비었는 지 / 가득 찼는 지 (7)검색-인덱스 (0)종료 : ");
        scanf("%d", &m);

        if(m==0) break;
        switch(m)
        {
            case 1 :    //인큐
              printf("데이터 : "); scanf("%d", &x);
              if(Enque(&que, x) == -1)
                printf("\a오류 : 인큐에 실패하였습니다.\n");
              break;

            case 2 :    //디큐
              if(Deque(&que, &x) == -1)
                printf("\a오류 : 디큐에 실패하였습니다.\n");
              else
                printf("디큐한 데이터는 %d입니다.\n", x);
              break;

            case 3 :    //피크
              if(Peek(&que, &x) == -1)
                printf("\a오류 : 피크에 실패하였습니다.\n");
              else
                printf("피크한 데이터는 %d 입니다.\n", x);
              break;

            case 4 :    //출력
              Print(&que);
              break;

            case 5 :    //모두 삭제
              Clear(&que);
              break;

            case 6 :    //비었는 지 / 가득 찼는 지
              printf("큐가 비어 있%s\n", IsEmpty(&que)? "습니다." : "지 않습니다.");
              printf("큐가 가득 차 있%s\n", IsFull(&que)? "습니다." : "지 않습니다.");
              break;

            case 7 :    //검색-인덱스
              printf("검색할 데이터 : "); scanf("%d", &x);
              idx = Search(&que, x);
              if(idx == -1)
                printf("\a오류 : 검색에 실패했습니다.\n");
              else{
                printf("데이터는 인덱스 %d에 있습니다.\n", idx);
                printf("데이터는 큐의 맨 앞 요소에서 %d 만큼 뒤에 있습니다.\n", Search2(&que, x));
              }
              break;
        }
    }
    Terminate(&que);
    return 0;
}