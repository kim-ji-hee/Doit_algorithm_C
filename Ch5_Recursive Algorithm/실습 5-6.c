//�ϳ����� ž
#include <stdio.h>

//����[1] ~ ����[no]�� x ��տ��� y ������� �ű�
void move(int no, int x, int y)
{
    if(no > 1)
        move(no-1, x, 6-x-y);   //�׷��� ���� ��տ��� �߰� �������
    printf("����[%d]��(��) %d ��տ��� %d ������� �ű�\n", no, x, y);  //�ٴ� ������ ��ǥ �������
    if(no > 1)
        move(no-1, 6-x-y, y);   //�׷��� �߰� ��տ��� ��ǥ �������
}

int main(void)
{
    int n;  //������ ����
    printf("�ϳ����� ž\n���� ���� : ");
    scanf("%d", &n);
    move(n, 1, 3);

    return 0;
}