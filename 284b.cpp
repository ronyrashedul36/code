#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int main()
{
    int i,j,n,m;
    map<string,int>ma;
    cin>>n>>m;
    string s1[m],s2[m];
    i=0;
    while(m--) {

        cin>>s1[i]>>s2[i];
        ma[s1[i]]=i;
        ma[s2[i]]=i;
        i++;
    }
    string s;
    while(n--) {
        cin>>s;
        int pos = ma[s];
        if(s1[pos].size()<=s2[pos].size()) cout << s1[pos] << " ";
        else cout << s2[pos] << " ";
    }
    cout << endl;
    return 0;
}

