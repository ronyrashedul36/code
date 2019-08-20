#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    map<char,int>ma;
    map<char,int>::iterator it;
    cin>>s;
    int i,l,cnt=0;
    l=s.size();
    s1=s;
    reverse(s1.begin(),s1.end());
    if(s == s1)
    {
        cout << "First"<<endl;
        return 0;
    }
    else
    {
        for(i=0; i<l; i++)
        {
            ma[s[i]]++;
        }
    }
    for(it=ma.begin(); it!=ma.end(); it++)
    {
        if((it->second)%2!=0)
            cnt++;
    }
    cnt--;
    if(cnt%2 && cnt>0)
    {
        cout << "Second";
    }
    else
    {
        cout << "First";
    }
    cout << endl;
    return 0;
}
