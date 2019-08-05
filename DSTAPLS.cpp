#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
       ll n,k,c,i=0;
       cin>>n>>k;
       c=n/k;

       ///cout << c << " " << i << endl;
       if(c%k!=0){
        cout << "NO" << endl;
       } else {
        cout << "YES" << endl;
       }
    }
    return 0;
}
