#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==1 && m==1) {
        cout << 1 << endl;
        return 0;
    }
    int m1=max(m-1,n-m);
    if(m1==n/2 && m1==m)
        cout << m1+1 << endl;
    else if(m<n/2) {
        cout << m+1 << endl;
    }
    else
        cout << m1 << endl;
    return 0;
}
