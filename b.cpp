#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k,i,ans=0,ma=0,x;
    map<char,int>m;
    cin>>s>>k;
    char z;
    for(i=0; i<26; i++)
    {
        cin>>x;
        char c=97+i;
        m[c]+=x;
        if(ma<x)
        {
            ma=x;
            z=c;
        }
    }
    for(i=0; i<s.size(); i++)
    {
        ans+=(i+1)*m[s[i]];
    }
    int si=s.size()+1;
    for(i=0; i<k; i++)
    {
        s+=z;
        ans+=ma*si;
        si++;
    }
    ///cout << s << endl;
    cout << ans << endl;
    return 0;
}
