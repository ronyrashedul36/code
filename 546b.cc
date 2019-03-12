#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i,j,k;
    cin>>n>>k;
    if(n == 2 || k == 1)
     ans=2*n+(n-1)+1;
    else if(n-k>k-1)
     ans=2*n+(n-1)+(k-1)+1;
    else
     ans=2*n+(n-1)+(n-k)+1;
    cout << ans ;
    return 0;
}
