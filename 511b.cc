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
    int n,c,i;
    si(n);
    int a[n],b[n],sum[n];
    FOR(i,n)
    {
        sii(a[i],b[i]);
        sum[i]=a[i]+b[i];
    }
    sort(sum,sum+n);
    pi(sum[n-1]);
    return 0;
}
