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
    int n,i,j,k;
    si(n);
    k=n;
    int sum[n];
    i=0;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sum[i++]=a+b+c+d;

    }
    int temp=sum[0];
    sort(sum,sum+k,greater<int>());
    FOR(i,k)
    {
        if(temp==sum[i])
        {
             pi(++i);
             break;
        }
    }
    return 0;
}
