#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,k,ans=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    i=1;
    while(1) {
        bool b = true;
        for(i=1;i<n;i++) {
            if(a[i]<a[i-1]) {
                ans++,swap(a[i],a[i-1]);
                cout << i << " " << i+1 << endl;
                b=false;
                break;
            }
        }
        if(b) break;
    }
    return 0;
}

