#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m,x,y,z;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
     cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=2;i--) {
     x=a[i];
     y=a[i-1];
     z = a[i-2];
     if(x+y>z && x+z>y && y+z>x) {
       cout <<"YES"<< endl ;
       return 0;
     }
    }
    cout << "NO" << endl;
    return 0;
}
