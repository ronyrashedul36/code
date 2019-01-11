#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,d,ans=0;
    cin>>t;
    while(t--){
            ans=0;
        cin>>a>>b>>d;
        if(d<a || d>b){
            cout<<d<<endl;
           continue;
        }
        else{
          while(1){
              ans=ans+d;
                if(ans>b){
                cout<<ans<<endl;
                break;
            }
          }
        }
    }

    return 0;
}
