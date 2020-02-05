#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;

    while(n--)
    {
        ll t,odd,even,sum;
        odd=even=sum=0;
        cin>>t;
        int a[t];
        int i;
        for(i=0; i<t; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2)
                odd++;
            else
                even++;
        }
       if(even==t || (odd == t && t%2==0)) cout <<"NO";
       else cout << "YES";
       cout << endl;

    }
    return 0;
}
