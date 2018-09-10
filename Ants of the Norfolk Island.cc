
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
     long long int t,k,n;
  cin>>t>>k;
  while(t--)
  {
     cin>>n;
     long long int a[n],sum=0;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        sum+=a[i];
     }
     if(sum>k)
      cout <<"FAILURE"<<endl;
     else
       cout <<"SUCCESS"<<endl;
  }
  return 0;
}
