#include<bits/stdc++.h>
#define ll long long

using namespace std;

// recursion
/*
ll binpow(ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a%10;
    else
        return res * res%10;
}
*/
// without recursion
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a%10;
        a = a * a % 10;
        b >>= 1;
    }
    return res%10;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout << binpow(a%10, b) << endl;
    }
    return 0;
}
