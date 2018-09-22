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
    int n,a,b,c,i;
    si(n);
    a=1;
    b=2;
    c=n-3;
    if(c>0)
    {
        if(c%3!=0) cout << a<< " "<<b<<" "<<c<<endl;
        else cout << a<< " "<<b-1<<" "<<c+1<<endl;
    }else
    cout << a<< " "<<b-1<<" "<<c+1<<endl;
    return 0;
}
