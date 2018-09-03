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
    int n,i,j;
    si(n);
    char a[n][n];
    FOR(i,n){
    FOR(j,n)
     {
     cin>>a[i][j];
    }
    }
    FOR(i,n){
    FOR(j,n)
    {
        if(a[i][j]=='#')
        {
            if(a[i+1][j]=='#' && a[i+2][j]=='#' && a[i+1][j+1]=='#' && a[i+1][j-1]=='#'){
            a[i][j]='.';
            a[i+1][j]='.';
            a[i+2][j]='.';
            a[i+1][j+1]='.';
            a[i+1][j-1]='.';

            cout<<i<<" "<<j<<endl;
            }
            else
            {
            cout << "NO"<<endl;
            return 0;
            }
        }

    }
    }
    cout << "YES"<<endl;
    return 0;
}
