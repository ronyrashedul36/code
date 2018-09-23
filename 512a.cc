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
    int n,a,b,i,j;
    si(n);
    int x[n];
    FOR(i,n)
    {
         si(x[i]);
         if(x[i]==1)
           {
                 cout << "HARD"<<endl;
                 return 0;
           }

    }
   cout <<"EASY"<<endl;
    return 0;
}
