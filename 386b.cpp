#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string s,s1="";
    cin>>s;
    if(n%2 == 0) {
        for(i=0;i<n;i++) {
            if(i%2==0) s1=s[i]+s1;
            else s1+=s[i];
        }
    } else {
        for(i=0;i<n;i++) {
            if(i%2==0) s1+=s[i];
            else s1=s[i]+s1;
        }
    }
    cout << s1 << endl;
    return 0;
}
