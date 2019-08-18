#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans,i,j=0;
    cin>>n>>k;
    string s,s1;
    cin>>s;
    while(k) {
        char c=97+j;

        for(i=0;i<s.size();i++) {
            if(c==s[i] && k) {
                s.erase(i,1);
                i--;
                k--;
            }
            else if(k==0) break;
        }
        j++;

    }
    cout << s << endl;
    return 0;
}
