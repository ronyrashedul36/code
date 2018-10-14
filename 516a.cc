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
    int a,b,c;
    siii(a,b,c);
    if((a+b)>c && (b+c)>a && (a+c)>b) {
        pi(0);
        return 0;
    }
    int ans=0;
    int m=max(a,b);
     m=max(m,c);
    if(m==a)
    {
      ans=(a+1)-(b+c);
    }
    else if(m==b)
    {
         ans=(b+1)-(a+c);
    }
    else{
         ans=(c+1)-(b+a);
    }
    pi(ans);
    return 0;
}
