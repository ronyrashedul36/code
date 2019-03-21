#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,mx,sum,i,j,x;
    x=mx=sum=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sum=a[n-1];
    x=a[n-1];
     for(i=n-2;i>=0;i--)
    {
            if(a[i]>=x) {
                sum+=x-1;
                x-=1;
            }
            else
            {
                x=a[i];
                sum+=a[i];
            }

            if(x <= 0) break;
    }
    cout << sum;
    return 0;
}
