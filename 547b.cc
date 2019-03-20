#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one,last,mx,c,y=0,z;
    one=last=z=0;
    mx=c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(!a[i]) z++;
    }
    if(z == n)
    {
        cout << 0;
        return 0;
    }
    for(int i=0;i<n;i++)

    {
        if(a[0] == 1 && a[0] == a[i] && y == 0) one++;
        else y=1;
        if(a[i] == 1 && a[i] == a[i+1]) c++;
        else mx=max(mx,c),c=1;

    }
    for(int i=n-1;i>=0;i--) {

        if(a[i]) last++;
        else break;

    }
    last+=one;
    if(mx<last) mx=last;
    cout<<mx;
    return 0;
}
