#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,n2,i,j;
    double ma,mi;
    double ans=0.0;
    cin>>n>>n1>>n2;

    double a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ma=max(n1,n2);
    mi=min(n1,n2);
    for(i=n-1;i>=0 && mi;i--) {
        ans+=a[i];
        mi--;
    }
     mi=min(n1,n2);
    ans/=mi;
    double ans1=0.0;
    for(int j=i;j>=0 && ma;j--) {
        ans1+=a[j];

        ma--;
    }
    ma=max(n1,n2);
    ans1=ans1/(1.0*ma);

    printf("%.8lf",ans+ans1);
    return 0;
}
