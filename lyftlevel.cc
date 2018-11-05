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
    long long int n,x,y,x1,y1,x2,y2;
    cin>>n>>x>>y;
    if(x==1 && y==1)
    {
        cout<<"White"<<endl;
        return 0;
    }
    else if(x==n && y==n)
    {
        cout<<"Black"<<endl;
        return 0;
    }
    x1=x-1;
    y1=y-1;
    x2=n-x;
    y2=n-y;
    if(x1+y1<=x2+y2)
    {
        cout<<"White"<<endl;
    }
    else{
         cout<<"Black"<<endl;
    }
    return 0;
}
