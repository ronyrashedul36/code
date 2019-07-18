
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cost=0,e=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cost+=a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]>a[i]+e)
        {
            cost+=a[i+1]-(a[i]+e);
            e=0;
        }
        else
        {
            e+=a[i]-a[i+1];
        }
        //cout << e << " ";
    }
    cout << cost << endl;
    return 0;
}
