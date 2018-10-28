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
    int n,l=0,sum=0,sum1=0,i;
    si(n);
    int a[n];
    FOR(i,n)
    {
        si(a[i]);
        sum+=a[i];

    }
    sort(a,a+n);
    l=a[n-1];
    while(1)
    {
        sum1=0;

        FOR(i,n)
        {
            sum1+=l-a[i];
        }
        if(sum1>sum) break;
         l++;
    }
    pi(l);
    return 0;
}
