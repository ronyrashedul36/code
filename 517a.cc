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
    int w,h,k,ans=0,i,j;
    siii(w,h,k);

    for(i=1;i<=k;i++)
    {
       ans+=2*w+2*h-4;
       w-=4;
       h-=4;
    }

     cout <<ans<<endl;
    return 0;
}
