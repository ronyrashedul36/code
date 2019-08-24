#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0;
    cin>>n;
    int l[n];
    vector<pair<int,string> >v;
    string s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        v.push_back(make_pair(s[i].size(),s[i]));
    }
    sort(v.begin(),v.end());
    for(i=1; i<v.size(); i++)
    {
        string s1=v[i].second;
        string s2=v[i-1].second;
        if(s1.find(s2) != std::string::npos)
            continue;
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(i=0; i<v.size(); i++)
        cout << v[i].second << endl;
    return 0;

}
