//int�� ť IntQueue�� ����ϴ� ���α׷�
#include <stdio.h>
#include "�ǽ� 4-4.h"

int main(void)
{
    IntQueue que;

    if(Initialize(&que, 64) == -1)
    {
      printf("ť�� ������ �����Ͽ����ϴ�.\n");
      return 1;
    }
    while(1)
    {
        int m, x, idx;
        printf("���� ������ �� : %d / %d \n", Size(&que), Capacity(&que));
        printf("(1)��ť (2)��ť (3)��ũ (4)��� (5)��� ����  
                (6)����� �� / ���� á�� �� (7)�˻�-�ε��� (0)���� : ");
        scanf("%d", &m);

        if(m==0) break;
        switch(m)
        {
            case 1 :    //��ť
              printf("������ : "); scanf("%d", &x);
              if(Enque(&que, x) == -1)
                printf("\a���� : ��ť�� �����Ͽ����ϴ�.\n");
              break;

            case 2 :    //��ť
              if(Deque(&que, &x) == -1)
                printf("\a���� : ��ť�� �����Ͽ����ϴ�.\n");
              else
                printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
              break;

            case 3 :    //��ũ
              if(Peek(&que, &x) == -1)
                printf("\a���� : ��ũ�� �����Ͽ����ϴ�.\n");
              else
                printf("��ũ�� �����ʹ� %d �Դϴ�.\n", x);
              break;

            case 4 :    //���
              Print(&que);
              break;

            case 5 :    //��� ����
              Clear(&que);
              break;

            case 6 :    //����� �� / ���� á�� ��
              printf("ť�� ��� ��%s\n", IsEmpty(&que)? "���ϴ�." : "�� �ʽ��ϴ�.");
              printf("ť�� ���� �� ��%s\n", IsFull(&que)? "���ϴ�." : "�� �ʽ��ϴ�.");
              break;

            case 7 :    //�˻�-�ε���
              printf("�˻��� ������ : "); scanf("%d", &x);
              idx = Search(&que, x);
              if(idx == -1)
                printf("\a���� : �˻��� �����߽��ϴ�.\n");
              else{
                printf("�����ʹ� �ε��� %d�� �ֽ��ϴ�.\n", idx);
                printf("�����ʹ� ť�� �� �� ��ҿ��� %d ��ŭ �ڿ� �ֽ��ϴ�.\n", Search2(&que, x));
              }
              break;
        }
    }
    Terminate(&que);
    return 0;
}