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
   int n,i,j=0,ans=0;
   si(n);
   int b[n],a[n];

   FOR(i,n) {
    si(b[i]);
   }
   for(i=1;i<n-1;i++)
   {
       if(b[i] == 0 && b[i-1] == 1 && b[i+1] == 1)
       {
           ans++;
           a[j] = i;
           b[i+1] =0;
           b[i-1] = 0;
           if(j > 1 && (a[j] - a[j-1] == 2)) {
            ans--;

           }
           j++;

       }
   }

   pi(ans);
    return 0;
}
