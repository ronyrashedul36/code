#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i=0,ans;
    cin>>t;
    while(t--){
        int r1,c1,r2=1,c2=1;
        ans=0;
        i++;
        cin>>r1>>c1;
        for(int r2=1;r2<=8;r2++)
        {
            for(int c2=1;c2<=8;c2++)
            {
                int m=(r1-r2)*(r1-r2);
                int n=(c1-c2)*(c1-c2);
                m+=n;
                if(m==5) ans++;
            }
        }

      cout << "Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}
