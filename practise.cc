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
    int n,i,j,k,m,sum=0;
    sii(n,k);
    int a[n];

    FOR(i,n) si(a[i]);
        si(m);
    sort(a,a+n);
      if(n>=m)
      FOR(i,m) sum+=a[i];
      else
        FOR(i,n) sum+=a[i];
    if(m>n) sum-=k*(m-n);
    pi(sum);
    return 0;
}


