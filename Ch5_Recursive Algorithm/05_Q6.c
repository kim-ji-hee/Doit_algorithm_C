//�ϳ����� ž
#include <stdio.h>

//����[1] ~ ����[no]�� x ��տ��� y ������� �ű�
void move(int no, int x, int y)
{
    char *name[] = {"A���", "B���", "C���"};

    if(no > 1)
        move(no-1, x, 6-x-y);   //�׷��� ���� ��տ��� �߰� �������
    printf("����[%d]��(��) %s���� %s���� �ű�\n", no, name[x-1], name[y-1]);  //�ٴ� ������ ��ǥ �������
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