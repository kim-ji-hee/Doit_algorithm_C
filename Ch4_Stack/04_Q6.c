#include <stdio.h>
#include "04_Q6.h"

int main(void)
{
    IntDequeue que;
    if(Initialize(&que, 64) == -1)
    {
        printf("ť�� ������ �����߽��ϴ�.\n");
        return 1;
    }

    while(1) {
        int m, x, idx;

        printf("���� �������� �� : %d / %d\n", Size(&que), Capacity(&que));
        printf("(1)�� �տ� ������ ��ť (2)�� ���� ������ ��ť (3)�� �� ��ũ (4)���\n
                (5)�� �ڿ� ������ ��ť (6)�� ���� ������ ��ť (7)�� �� ��ũ (8)�˻�\n
                (9)�ʱ�ȭ (10)��� �ִ� ��/���� á�� �� (0)���� : ");
        scanf("%d", &m);

        if(m==0) break;

        switch(m)
        {
            case 1 : //�� �տ� ������ ��ť
                printf("������ : "); scanf("%d" &x);
                if(EnqueFront(&que, x) == -1)
                    printf("\a���� : ��ť�� �����߽��ϴ�.");
                break;

            case 2 : //�� ���� ������ ��ť
                if(DequeFront(&que, &x) == -1)
                    printf("\a���� : ��ť�� �����߽��ϴ�.\n");
                else
                    printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
                break;

            case 3 : //�� �� ��ũ
                if(PeekFront(&que, &x) == -1)
                    printf("\a���� : ��ũ�� �����߽��ϴ�.\n");
                else
                    printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
                break;

            case 4 : //�� ���
                Print(&que);
                break;

            case 5 : //�� �ڿ� ������ ��ť
                printf("������ : "); scanf("%d", &x);
                if(EnqueRear(&que, x) == -1)
                    printf("\a���� : ��ť�� �����߽��ϴ�.\n");
                break;

            case 6 : //�� ���� ������ ��ť
                if(DequeRear(&que, &x) == -1)
                    printf("\a���� : ��ť�� �����߽��ϴ�.\n");
                else
                    printf("��ť�� �����ʹ� %d �Դϴ�.\n", x);
                break;

            case 7 : //�� �� ��ũ
                if(PeekRear(&que, &x) == -1)
                    printf("\a���� : ��ũ�� �����߽��ϴ�.\n");
                else
                    printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
                break;

            case 8 : //�˻�
                printf("�˻� ������ : ");
                scanf("%d", &x);
                idx = Search(&que, x);
                if(idx == -1)
                    printf("\a���� : �˻��� �����߽��ϴ�.\n");
                else {
                    printf("�����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);
                    printf("ť�� �� �տ��� %d��ŭ �ڿ� ��ġ�մϴ�.\n", Search2(&que, x));
                }
                break;

            case 9 : //�ʱ�ȭ
                Clear(&que);
                break;

            case 10 : //�� ���� / ���� �� ���� �Ǵ�
                printf("ť�� ��� ��%s.\n", IsEmpty(&que) ? "���ϴ�" : "�� �ʽ��ϴ�");
                printf("ť�� ���� %s.\n", IsFull(&que) ? "á���ϴ�" : "���� �ʾҽ��ϴ�");
                break;
        }
    }
    Terminate(&que);

    return 0;
}