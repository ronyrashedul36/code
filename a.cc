#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
#include<map>
using namespace std;
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d%d",&a,&b)
#define siii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define FOR(x,to) for(x=0;x<(to);x++)
#define pi(a) printf("%d\n",a)
#define pb push_back
int main()
{
    string s,t;
    int i,m=0;
    cin>>s>>t;
    int l=s.length();
    int l1=t.length();
    if(l!=l1)
    {
        cout << "NO" << endl;
        return 0;
    }
    FOR(i,l)
    {
        if((s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') && (t[i] == 'a' || t[i] == 'e' ||t[i] == 'i' ||t[i] == 'o' ||t[i] == 'u'))
        {
            m++;
            continue;
        }
        else if(!((s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') && !(t[i] == 'a' || t[i] == 'e' ||t[i] == 'i' ||t[i] == 'o' ||t[i] == 'u')))
        {
            m++;
            continue;
        }
        else
            break;
    }
    if(m==l)
        cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
