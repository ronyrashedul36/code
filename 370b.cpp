#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x,y,l = s.size();
    if(l%2) {
     cout << -1 << endl;
     return 0;
    }
    x=y=0;
    for(int i=0;i<l;i++) {
     if(s[i] == 'U') y++;
     if(s[i] == 'D') y--;
     if(s[i] == 'R') x++;
     if(s[i] == 'L') x--;
    }
    /*if(x%2 == 0 && y%2 == 0) {
     x = x/2 ;
    } else if(x%2 != 0 && y%2 != 0) {
      x--;
      y++;
    }*/
    x=abs(x);
    y=abs(y);
    cout << (x+y)/2 ;
    cout << endl;
    return 0;
}
