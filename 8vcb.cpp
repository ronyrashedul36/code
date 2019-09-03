#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    x=0;
    map<string,int>ma;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        ma[s]++;
    }
    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        if(ma[s]>=1)
        {
            ma[s]--;
            x++;
        }
    }
    n-=x;
    m-=x;
    n+=(x+1)/2;
    m+=x/2;
    if(n>m)
        cout <<"YES"<<endl;
    else
        cout <<  "NO" << endl;
    return 0;
}
