#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    int m=1,n=1,c=0,c1=1,x=0;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(m==1 && s[i] == '[')
          {
                s1+=s[i];
                m=0;
                x++;
          }
         if(s[i] == ':' && m==0)
           {
               s1+=s[i];
               n=0;
               c=i;
               x++;
           }
           if(m==0 && n==0)
            break;
    }
    for(int i=l-1;i>c;i--)
    {
        if(m==0 && s[i] == ']')
        {
            s1+=s[i];
            m=1;
            x++;
        }
        if(m==1 && s[i] ==':')
        {
            s1+=s[i];
            n=2;
            c1=i;
            x++;
        }
        if(m==1 && n==2)
            break;
    }
    for(int i=c;i<c1;i++)
    {
        if(s[i] == '|')
        {
            s1+=s[i];
        }
    }
    if(x==4)
    cout <<s1.length() << endl;
    else
        cout << -1 << endl;
    return 0;
}
