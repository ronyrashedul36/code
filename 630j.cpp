#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll findlcm(int arr[], int n)
{
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}
int main()
{
    ll i,j,n,m,cnt=0;
    cin>>n;
    int a[]={2,3,4,5,6,7,8,9,10};
    m=findlcm(a,9);
    cout << n/m << endl;
    return 0;
}
