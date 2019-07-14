#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k,i,x,c;
    int su=INT_MAX;
    cin>>n>>k;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if(k == 1)
    {
        for(i=0; i<n; i++)
        {
            if(su>a[i])
            {
                su = a[i];
                c=i;
            }
        }
        cout << c+1 << endl;
        return 0;
    }
    ///cout << a[0] << " ";
    for(i=1; i<n; i++)
    {
        a[i]+=a[i-1];
        ///cout << a[i] << " ";
    }
    ///cout << endl;
    k--;
    for(i=k; i<n; i++)
    {
        if(i == k)
        {
            su=a[i];
            c=0;
            continue;
        }
        if(su>(a[i]-a[i-k-1]))
        {
            su = a[i]-a[i-k-1];
            c=i-k;
        }

    }
    cout << c+1 << endl;
    return 0;
}
