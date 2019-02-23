#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt,ans,m,k;
    string s;
    cnt=ans=0;
    int w1,h1,w2,h2,h,w;
    cin>>w1>>h1>>w2>>h2;
    if(w1==w2)
    {
        cout << w1*2+(h1+h2)*2+4;
    }
    else if(w1>w2)
    {
        m=w1*2+h1*2+4-w2;
        k=w2+(h2-1)*2+2;
        cout << m+k << endl;
    }
    else
    {
        m=w2*2+h2*2+4-w1;
        k=w1+(h1-1)*2+2;
        cout << m+k << endl;
    }
    return 0;
}
