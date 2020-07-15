//int�� ���� ���α׷� ���
#ifndef ___IntSet
#define ___IntSet

//int�� ������ �����ϴ� ����ü
typedef struct {
    int max;  //������ ũ��
    int num;  //������ ���� ����
    int *set; //���� ��ü�� �迭(�� ù ��° ��ҿ� ���� ������)
} IntSet;

//���� �ʱ�ȭ
int Initialize(IntSet *s, int max);

//���� s�� n�� ��� �ִ��� Ȯ��
int IsMember(const IntSet *s, int n);

//���� s�� n�� �߰�
void Add(IntSet *s, int n);

//���� s���� n�� ����
void Remove(IntSet *s, int n);

//���� s�� ���� �� �ִ� �ִ��� ���� ������ ��ȯ
int Capacity(const IntSet *s);

//���� s�� ���� ����
int Size(const IntSet *s);

//���� s2�� s1�� ����
void Assign(IntSet *s1, const IntSet *s2);

//���� s1�� s2�� ������ Ȯ��
int Equal(const IntSet *s1, const IntSet *s2);

//���� s2�� s3�� �������� s1�� ����
IntSet *Union(IntSet *s1, const IntSet *s2, const IntSet *s3);

//���� s2�� s3�� �������� s1�� ����
IntSet *Intersection(IntSet *s1, const IntSet *s2, const IntSet *s3);

//���� s2���� s3�� �� �������� s1�� ����
IntSet *Difference(IntSet *s1, const IntSet *s2, const IntSet *s3);

//���� s�� ��� ���Ҹ� ���
void Print(const IntSet *s);

//���� s�� ��� ���Ҹ� ���(�� �ٲ� ���� ����)
void PrintLn(const IntSet *s);

//���� ����
void Terminate(IntSet *s);

#endif