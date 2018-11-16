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
    long long int n,i,j,k,a,b;
    cin>>n;
    while(n--)
    {
        long long int m=0,n=0;
        cin>>a>>b>>k;
        if(k%2 == 0) {
            m=k/2;
        }
        else {
            m=k/2+1;
        }
       /// cout <<m <<endl;
        cout << m*a-(k-m)*b<<endl;
       /// pi(m*a-(k-m)*b);
    }
    return 0;
}
