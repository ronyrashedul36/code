#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ans=0;
    cin>>n;
    int a[n],b[n]={0};
    for(i=0;i<n;i++) cin>>a[i];
    for(i=n-1;i>=0;i--) {
        if(a[i]>ans) {
            b[i]=0;
            ans=a[i];
        }else {
            b[i]=ans+1-a[i];
        }
    }
    for(i=0;i<n;i++) cout << b[i] << " ";
    return 0;
}
