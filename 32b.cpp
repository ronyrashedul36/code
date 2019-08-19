#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l;
    l=s.size();
    for(i=0;i<l;i++) {
        if(s[i] == '.') cout << 0;
        else if(s[i]=='-' && s[i+1] == '.') cout << 1,i++;
        else if(s[i]=='-' && s[i+1] == '-') cout <<2,i++;
    }
    return 0;
}
