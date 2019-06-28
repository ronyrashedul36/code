#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i,j;
    cin>>q;
    while(q--) {
      int n,k;
      cin>>n>>k;
      int a[n];
      for(i=0;i<n;i++) cin>>a[i];
      sort(a,a+n);

      if((a[n-1]-a[0])>2*k) {
       cout << -1  << endl;
       continue;
      } else {
      cout << a[0]+k << endl;
      }
    }
    return 0;
}
