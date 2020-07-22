//KMP������ ���ڿ��� �˻�
int kmp_match(const char txt[], const char pat[])
{
    int pt = 1;     //txt Ŀ��
    int pp = 0;     //pat Ŀ��
    int skip[1024]; //�ǳʶٱ� ǥ

    //ǥ �����
    skip[pt] = 0;
    while(pat[pt] != '\0')
    {
        if(par[pt] == pat[pp])
          skip[++pt] = ++pp;
        else if(pp == 0)
          skip[++pt] = pp;
        else
          pp = skip[pp];
    }

    //�˻�
    pt = pp = 0;
    while(txt[pt] != '\0' && pat[pp] != '\0')
    {
        if(txt[pt] == pat[pp])
        {
            pt++; pp++;
        }
        else if(pp == 0)
          pt++;
        else
          pp = skip[pp];
    }
    
    if(pat[pp] == '\0')
      return pt - pp;

    return -1;
}