#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    int l[n],r[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];

    }
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(k<=r[i]) break;

    }
    cout << i << endl;
    cout << n-(i);
    return 0;
}
