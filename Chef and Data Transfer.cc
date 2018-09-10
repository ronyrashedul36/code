
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
    int n,l,i=0,m=INT_MAX,j,lo;
    sii(n,l);
    string s;
    cin>>s;
    string a[n];
    ///string ar[n];
    while(n--)
    {
        int cnt=0;
        cin>>a[i];
        FOR(j,l)
        {
            if(s[j]!=a[i][j]) cnt++;
        }
        if(cnt<m)
       {
           m=cnt;
           lo=i;
       }
       i++;
    }
    cout <<a[lo]<<endl;
    return 0;
}
