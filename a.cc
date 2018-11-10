#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
#include<map>
using namespace std;
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d%d",&a,&b);
#define siii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define FOR(x,to) for(x=0;x<(to);x++)
#define pi(a) printf("%d\n",a)
#define pb push_back
int main()
{
    int s,n;
    sii(n,s);
    int i,a[n],b[n];
    FOR(i,n)
    {
        si(a[i]);
    }
    FOR(i,n)
    {
        si(b[i]);
    }
    if(a[0] == 0)
    {
        cout <<"NO"<<endl;
        return 0;
    }
    if(a[s-1] == 1)
    {
        cout <<"YES"<<endl;
        return 0;
    }
    int x=0;
    for(i = s;i<n;i++)
    {
        if(a[i] == b[i] && b[i]==1)
        {
            x=1;
            break;
        }
    }
    if(x==0)
    {
        cout <<"NO"<<endl;
        return 0;
    }
   if(b[s-1] == 1)
    {
         cout <<"YES"<<endl;
         return 0;
    }
     cout <<"NO"<<endl;


    return 0;
}

