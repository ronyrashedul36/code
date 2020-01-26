#include<bits/stdc++.h>
#define ll long long
using namespace std;

// recursive
ll gcd(ll a, ll b)
{

    if(b == 0)
        return a;
    return gcd(b, a%b);
}

/* using ternary operator
int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}
****non recursive***
int gcd(int a, int b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
*/
ll lcm (ll a,ll b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout << gcd(a,b)<< " "<<lcm(a,b) << endl;
    }
    return 0;
}
