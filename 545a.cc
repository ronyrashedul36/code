#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt,ans,mx=0,c,d;
    int one=0,two=0;
    c=0;
    d=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    c=a[0];
    d=1;
    for(i=0;i<n;i++)
    {
        a[i] == 1 ? one++: two++;
        ///cout << one <<" "<< two << endl;
        if(one && two && a[i]!=a[i+1])
        {
            mx=max(mx,2*min(one,two));
            a[i]==1?two=0:one=0;


        }

    }
    cout << mx << endl;
    return 0;
}
