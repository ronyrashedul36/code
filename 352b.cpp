#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()>26) {
        cout << -1 << endl;
        return 0;
    }
    set<char>s1;
    for(i=0;i<n;i++) s1.insert(s[i]);
    cout << n-s1.size() << endl;
    return 0;
}
