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
    int n,i,ans=0;
    si(n);
    int a[n];
    FOR(i,n) si(a[i]);
    sort(a,a+n);
    FOR(i,n-1)
    {
        int d=a[i+1]-a[i];
        if(d>1)
        {
            ans+=d-1;
        }
    }
    pi(ans);
    return 0;
}
