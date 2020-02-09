#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n=2*n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int d=INT_MAX;
        sort(a,a+n);
        d = a[n/2]-a[n/2-1];
        cout << d << endl;
    }
 
    return 0;
}
