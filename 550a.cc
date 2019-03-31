
#include<bits/stdc++.h>
using namespace std;
string sortString(string &str)
{
   sort(str.begin(), str.end());
   return str;
}
int main(){

long long int i,j,ans,cnt,m,k,n;
ans=cnt=0;
cin>>n;
string s;
while(n--)
{
 cin>>s;
 ans=1;
 s=sortString(s);
 for(i=1;i<s.size();i++)
 {

     if(s[i-1]+1 == s[i]) {
            ans++;
            continue;
     }
     else break;
 }
 if(ans == s.size()) cout << "Yes";
 else cout << "No";
 cout << endl;
}
return 0;
}
