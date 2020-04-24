#include <stdio.h>
#include "04_Q3.h"

int main(void)
{
    ArrayIntQueue que;

    if(Initialize(&que, 64) == -1)
    {
        printf("ť�� ������ �����Ͽ����ϴ�.\n");
        return 1;
    }

    while(1)
    {
        int menu, x, idx;

        printf("���� ������ �� : %d / %d \n", Size(&que), Capacity(&que));
        prinf("(1)��ť (2)��ť (3)��ũ (4)��� (5)�˻� (6)���� (7)�� ����/���� �� ���� (0)���� : ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch(menu)
        {
            case 1 : //��ť
                printf("������ : ");
                scanf("%d", &x);
                if(Enque(&que, x) == -1)
                    printf("\a���� : ��ť�� �����߽��ϴ�.\n");
                break;

            case 2 : //��ť
                if(Deque(&que, &x) == -1)
                    printf("\a���� : ��ť�� �����߽��ϴ�.\n");
                else
                    printf("��ť�� �����ʹ� %d �Դϴ�.\n", x);
                break;

            case 3 : //��ũ
                if(Peek(&que, &x) == -1)
                    printf("\a���� : ��ũ�� �����߽��ϴ�.\n");
                else
                    printf("��ũ�� �����ʹ� %d �Դϴ�.\n", x);
                break;

            case 4 : //���
                Prinf(&que);
                break;

            case 5 : //�˻�
                printf("�˻� ������ : ");
                scanf("%d", &x);
                idx = Search(&que, x);
                if(idx == -1)
                    printf("\a���� : �˻��� �����߽��ϴ�.\n");
                else
                    printf("�����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);
                break;

            case 6 : //Ŭ����
                Clear(&que);
                break;

            case 7 : //�� ���� / ���� �� ���� �Ǵ�
                printf("ť�� ��� ��%s.\n", IsEmpty(&que) ? "���ϴ�" : "�� �ʽ��ϴ�");
                printf("ť�� ���� %s.\n", IsFull(&que) ? "á���ϴ�" : "���� �ʾҽ��ϴ�");
                break;

        }
    }

    Terminate(&que);

    return 0;
}