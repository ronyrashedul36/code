#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,k1,k2,n,ans,cnt,mi,ma;
    ans=mi=ma=0;
    cin>>a1>>a2>>k1>>k2>>n;
    cnt=a1+a2;
    ans=a1*(k1-1)+a2*(k2-1);
    ans=n-ans;
    if(ans<=0)
    {
        mi=0;
    }
    else
    {
        mi = min(cnt,ans);
    }
    if(k2>k1)
    {
        swap(k1,k2);
        swap(a1,a2);
    }
    ans=n/k2;
    n-=min(a2,ans)*k2;
    ma+=min(a2,ans);
    ans=n/k1;
    n-=min(a1,ans)*k1;
    ma+=min(a1,ans);
    cout << mi << " " << ma << endl;
    return 0;
}
