#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int l, int r, int x)
{
    if(r>=l)
    {
        int mid = l+(r-l)/2;
        if(a[mid] == x)
            return mid;
        else if(a[mid]>x)
        {
            r=mid-1;
            return binarySearch(a,l,r,x);
        }
        else
        {
            l=mid+1;
            return binarySearch(a,l,r,x);
        }

    }
}
int main()
{
    int n,l,i,d;
    cin>>n>>l;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int f=max(a[0],l-a[n-1]);
    int mx=0;
   /// cout << mx << endl;
    for(i=1;i<n;i++)
    {
        d = (a[i]-a[i-1]);
        mx=max(d,mx);
    }
     ///cout << f << endl;
     ///mx=max(f,mx/2);
      if(mx/2.>f)
        printf("%.10f",mx/2.);
      else
        printf("%.10f",f/1.);

    return 0;
}
