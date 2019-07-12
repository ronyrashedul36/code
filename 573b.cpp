
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1 == s2 && s1 == s3)
    {
        cout << 0 << endl;
        return 0;
    }
    if(s1 == s2 || s1 == s3 || s2 == s3)
    {
        cout << 1 << endl;
        return 0;
    }
    int a,b,c;
    a=int(s1[0]);
    b=int(s2[0]);
    c=int(s3[0]);
    int ar[3] = {a,b,c};
    sort(ar,ar+3);
    int d = ar[2]-ar[0];
    if(d<=2 && s1[1] == s2[1] && s1[1] == s3[1])
    {
        cout << 0 << endl;
        return 0;
    }
    if(d<=2 && (s1[1] == s2[1] || s1[1] == s3[1] || s2[1] == s3[1]))
    {
        cout << 1 << endl;
        return 0;
    }
    if(abs(a-b)<=2 && s1[1] == s2[1])
    {
        cout << 1 << endl;
        return 0;
    }
    if(abs(a-c)<=2 && s1[1] == s3[1])
    {
        cout << 1 << endl;
        return 0;
    }
    if(abs(b-c)<=2 && s3[1] == s2[1])
    {
        cout << 1 << endl;
        return 0;
    }
    cout << 2 << endl;
    return 0;
}
