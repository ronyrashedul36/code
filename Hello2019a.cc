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
#define sii(a,b) scanf("%d%d",&a,&b)
#define siii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define FOR(x,to) for(x=0;x<(to);x++)
#define pi(a) printf("%d\n",a)
#define pb push_back
int main()
{
    int i,j,n,ans=0,cnt=0,tmp;
    cin>>n;
    int a[n];
    FOR(i,n) si(a[i]),ans+=a[i];
    sort(a,a+n);
    if(ans%360 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    tmp = --n;
    int ans1,ans2;
    ans1=ans2=0;
    i=0;
    while(i <= tmp)
    {
        if(ans1<=ans2){
            ans1+=a[i];
            i++;
        }
        else{
            ans2+=a[tmp];
            tmp--;
        }
    }
    if((ans1-ans2)) {
        cout << "NO" << endl;
    }else{
    cout << "YES" << endl;
    }
    return 0;
}
