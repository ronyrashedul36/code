#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,cnt,m,ans,t;
  cnt = 0;
  ans=INT_MAX;
  cin>>n>>t;
  int s[n],d[n];
  for(i=0;i<n;i++) {
    cin>>s[i]>>d[i];

  }
  for(i=0;i<n;i++)
  {
      if(s[i]==t){
        cout << i+1;
        return 0;
    }
  }
  for(i=0;i<n;i++)
  {
     cnt = s[i];
     while(cnt<t) {
        cnt+=d[i];
     }
     if(ans>cnt && cnt>=t) {
        ans = min(ans,cnt);
        j=i+1;
     }


  }
  cout << j;
  return 0;
}
