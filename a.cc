#include<bits/stdc++.h>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    int i,j,n,cnt,ans,m;
    cnt=ans=0;
    m=INT_MAX;
    string s;
    cin>>s;
    m=s.size();
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a') cnt++;
    }
    ans=m/2+m%2;
    if(cnt>ans) cout << m;
    else cout << 2*cnt-1;
    return 0;
}
