//재귀 호출을 제거한 recur3 함수
void recur3(int n)
{
    IntStack stk;
    Initialize(&stk, 100);
    Top :
        if(n>0)
        {
            Push(&stk, n);
            n = n-1;
            goto Top;
        }
        if(!IsEmpty(&stk))
        {
            Pop(&stk, &n);
            n = n-2;
            printf("%d\n", n);
            goto Top;
        }

        Terminate(&stk);
}