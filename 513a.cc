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
    int n,e=0,i;
    si(n);
    string s;
    cin>>s;
    FOR(i,n)
    {
        if(s[i]=='8') e++;
    }

    if(n<11)
    {
        pi(0);
        return 0;
    }
    int m = n/11;
    if(e<=m)
        pi(e);
    else
        pi(m);
    return 0;
}
