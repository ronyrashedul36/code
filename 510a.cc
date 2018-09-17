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
    int n,m;
    sii(n,m);
    int i;
    int a[n];
    FOR(i,n) si(a[i]);
    sort(a,a+n);
    int ma=a[n-1]+m;
    while(m--)
    {
        sort(a,a+n);
        a[0]++;
    }
    sort(a,a+n);
    cout << a[n-1]<<" "<<ma<<endl;
    return 0;
}
