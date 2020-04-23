//int�� ���� intStack�� ���
#include <stdio.h>
#include "IntStack.h"

int main(void)
{
    IntStack s;
    if(Initialize(&s, 64) == -1)
    {
        printf("���� ������ �����Ͽ����ϴ�.\n");
        return 1;
    }

    while(1)
    {
        int menu, x, idx;
        printf("���� ������ �� : %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (5)���� (6)�˻� (7)�� ����/���� �� ���� (0)���� : ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch(menu)
        {
            case 1 : //Ǫ��
              printf("������ : ");
              scanf("%d", &x);
              if(Push(&s, x) == -1)
                printf("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.\n");
              break;

            case 2 : //��
              if(Pop(&s, &x) == -1)
                printf("\a���� : �˿� �����Ͽ����ϴ�.\n");
              else
                printf("�� �����ʹ� %d �Դϴ�.\n", x);
              break;

            case 3 : //��ũ
              if(Peek(&s, &x) == -1)
                printf("\a���� : ��ũ�� �����Ͽ����ϴ�.\n");
              else
                printf("��ũ �����ʹ� %d �Դϴ�.\n");
              break;

            case 4 : //���
              Print(&s);
              break;

            case 5 : //����
              Clear(&s);
              printf("������ ������ϴ�.\n");
              break;

            case 6 : //�˻�
              printf("�˻��� ������ �Է� : ");
              scanf("%d", &x);
              idx = Search(&s, x)
              if(idx == -1)
                printf("\a���� : �˻��� �����߽��ϴ�.");
              else
                printf("ã�� �������� �ε����� %d �Դϴ�.\n", idx);
              break;

            case 7 : //�� ����/���� �� ����
              printf("������ ��� %s.\n", IsEmpty(&s)? "�ֽ��ϴ�" : "���� �ʽ��ϴ�");
              printf("������ ���� %s.\n", IsFull(&s)? "á���ϴ�" : "���� �ʾҽ��ϴ�");
              break;
        }
    }

    Terminate(&s);
    return 0;
    
}