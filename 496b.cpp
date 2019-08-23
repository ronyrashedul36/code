#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int l1,l2,ans,i,j;
    ans=i=j=0;
    l1=s.size();
    l2=t.size();
    for(i=l1-1;i>=0;i--) {
            if(s[i]==t[l2-1]){
                l2--;
            }
            else break;
    }
    ans=l2+i+1;
    cout << ans << endl;
    return 0;
}
