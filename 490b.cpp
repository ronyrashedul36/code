#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j=0,cnt=0;
    cin>>n;
    string t,s;
    cin>>t;
    int a[n];
    for(i=1;i<=n/2;i++) {
        if(n%i==0) a[j++]=i;
    }
    a[j]=n;
    for(i=0;i<=j;i++) {
        for(int k=0;k<a[i]/2;k++) swap(t[k],t[a[i]-1-k]);
        ///cout << t << endl;
    }
    cout << t<<endl;
    return 0;
}
