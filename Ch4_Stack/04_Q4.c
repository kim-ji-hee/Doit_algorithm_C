
int Search2(const IntQueue* q, int x)
{
    for(int i=0; i<q->num; i++)
    {
        if (q->que[(i + q->front) % q->max] == x)
            return i;
    }
    return -1;
}
