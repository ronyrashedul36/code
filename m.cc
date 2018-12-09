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
#define sii(a,b) scanf("%d%d",&a,&b)
#define siii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define FOR(x,to) for(x=0;x<(to);x++)
#define pi(a) printf("%d\n",a)
#define pb push_back
int main()
{
    int n,k,i,j,m=0,x=0,y=0;
    sii(n,k);
    int a[n];
    FOR(i,n) si(a[i]);
    for(i=0;i<n;i++) {
     if(a[i] != a[i+1]) m++;//cout << i<<endl;
     else {
        ///cout << i << " " << m << endl;
        x=max(m+1,x);
       // cout << i<<endl;
        ///pi(m);
        m=0;
        y++;
     }
      ///if(i == n-2 && a[i] != a[i+1]) m++;
    }
    x=max(m,x);
    if(x == 0) pi(n);
    else
    pi(x);
    return 0;
}
