#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ans,cnt,k,d=-1000;
    ans=cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    k=n%2==0?n/2:n/2+1;
    while(d<=1000){
         for(i=0;i<n;i++)
         {
             if((a[i]/d)>0) cnt++;
            /// cout << a[i]/d << " ";
         }
         ///cout << endl;
         if(cnt>=k) {
            ans=d;
            break;
         }
         cnt=0;
         d++;
         if(d==0) d=1;

    }

    if(ans>=-1000 && ans<=1000) cout << ans << endl;
    else cout << 0 << endl;
    return 0;
}
