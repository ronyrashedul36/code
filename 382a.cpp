#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,g,t,g1,t1;
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='G')
            g1=i;
        else if(s[i] == 'T')
            t1=i;
    }
    g=min(g1,t1);
    t=max(g1,t1);
    bool b=false;
    for(i=g; i<n; i+=k)
    {
        if(s[i]=='#' || i>t)
        {
            b=false;
            break;
        }
        if(i==t && (s[i] == 'G' || s[i] == 'T')) {
            b=true;
            break;
        }
    }
    if(b)
    cout <<"YES"<<endl;
    else
         cout <<"NO"<<endl;
    return 0;
}
