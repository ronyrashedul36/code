#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i;
    cin>>n;
    string s="";
    for(i=1;i<=n;i++) {
        ostringstream os;
        os<<i;
        s+=os.str();
    }
    cout << s[n-1] << endl;
    return 0;
}
