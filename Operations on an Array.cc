#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d;
    set<long long int>s;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        s.insert(d);
    }
    int ans=0,mx=0,k=0;
    int ln=s.size();
    ///cout << ln <<endl;
    set<long long int>::iterator it,it1;

    for (it = s.begin(); it!=s.end();  ++it1)
    {
        ans=0;
        k++;
        for (it1 = s.begin(); it1!=s.end();  ++it1)
        {
           ans+=abs(*it1-*it);
        }
        mx=max(mx,ans);
        if(k == ln) break;
        ///cout << mx << endl;
    }
    cout << mx << endl;
    return 0;
}
