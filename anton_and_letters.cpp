#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1001];
    gets(s);
    
    int lenth,cnt=0,i,x=0;
    lenth=strlen(s);
    sort(s,s+lenth);
    for(i=0; i<lenth-1; i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            cnt++;
            if(s[i]==s[i+1])
                cnt--;
        }
    }
    printf("%d",cnt);
    return 0;
}
