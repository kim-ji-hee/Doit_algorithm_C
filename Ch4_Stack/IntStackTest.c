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
        int menu, x;
        printf("���� ������ �� : %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (0)���� : ");
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
        }
    }

    Terminate(&s);
    return 0;
    
}