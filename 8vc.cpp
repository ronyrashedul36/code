#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,ans;
    cin>>n;
    i=1;
    while(1) {
        ans=n*i+1;
        bool b=false;
        for(ll i=2;i<=sqrt(ans);i++) {
            if(ans%i==0) {
                b=true;
                break;
            }
        }
        if(b){
            cout <<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}
