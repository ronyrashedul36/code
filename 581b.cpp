
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,mi,ma,n,l,r;
    cin>>n>>l>>r;
    ma=mi=0;
    j=l;
    for(i=1;l--;i=i*2) {
       /// cout << i << " ";
        mi+=i;
    }

    if(n-j>0)
    mi+=(n-j)*1;

    j=r;
    for(i=1;r--;i=i*2) {
        ma+=i;
    }
    i/=2;
    if(n-j>0)
    ma+=(n-j)*i;

    cout << mi << " " << ma << endl;
    return 0;
}
