#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int t,m,ln;
    string s,ss;
    scanf("%d",&t);
    while(t--)
    {
        cin>>m>>s;
       /// ss=s;
        int i,j;
        bool b=true;
        i=0;
        j=m-1;
        for(i=0;i<m/2;i++,j--)
        {
            if(s[i]==s[j]) continue;

            if(s[i]>s[j])
                swap(s[i],s[j]);
            s[i]++;
            s[j]--;
            if(s[i]!=s[j])
            {
                b=false;
                break;
            }
        }
        if(b)
        {
            cout << "YES" <<endl;
        }
        else
             cout << "NO" <<endl;
    }

}
