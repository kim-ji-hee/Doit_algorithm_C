//���Ʈ-������(brute force method)���� ���ڿ��� �˻��ϴ� ���α׷�
#include <stdio.h>

//���Ʈ-���������� ���ڿ��� �˻��ϴ� �Լ�
int bf_match(const char txt[], const char pat[])
{
    int pt = 0;     //txt Ŀ��
    int pp = 0;     //pat Ŀ��

    while(txt[pt] != '\0' && pat[pp] != '\0')
    {
        if(txt[pt] == pat[pp])
        {
            pt++;
            pp++;
        }
        else {
            pt = pt - pp + 1;
            pp = 0;
        }
    }
    if(pat[pp] == '\0')
        return pt - pp;
    return -1;
}

int main(void)
{
    int idx;
    char s1[256];   //�ؽ�Ʈ
    char s2[256];   //����
    printf("���Ʈ-������\n");
    printf("�ؽ�Ʈ : ");
    scanf("%s", s1);
    printf("���� : ");
    scanf("%s", s2);
    idx = bf_match(s1, s2); //�ؽ�Ʈ s1���� ����s2�� ���Ʈ-���������� �˻�
    if(idx == -1)
      printf("�ؽ�Ʈ�� ������ �����ϴ�.\n");
    else
      printf("%d��° ���ں��� match�մϴ�.\n", idx+1);

    return 0;
}