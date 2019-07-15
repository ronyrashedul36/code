#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int s=0,a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>0) a[i]=0;
      else a[i]=abs(a[i]);
    }
    sort(a,a+n);
    for(int i=n-1;i>=0 && m;i--)
    {
      s+=a[i];
      m--;
    }
    cout << s << endl;
    return 0;
}
