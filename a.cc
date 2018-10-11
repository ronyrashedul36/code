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
    int t ;
    long long int s,a,b,c,sum=0;
    si(t);
    while(t--)
    {
        sum=0;
       cin>>s>>a>>b>>c;
        long long int x=s/(a*c);
        sum+=x*a+x*b;
        if(x>0)
        s-=x*(a*c);

            sum+=s/c;


        cout <<sum<<endl;
    }
    return 0;
}
