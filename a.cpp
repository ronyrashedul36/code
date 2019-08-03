#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,i,x,j=0;
    cin>>p>>n;

    int a[p]= {0};
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x>=p)
        {
            int mod=x%p;
            if(mod == 0 && a[mod] == 0)
            {
                a[mod]=1;
            }
            else if(a[mod]==0)
                a[mod]=mod;
            else
            {
                cout << i+1 << endl;
                return 0;
            }
        }
        else
        {
            if(x==0 && a[x] == 0) {
                a[x]=1;
            }
            else if(a[x]==0)
                a[x]=x;
            else
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}

