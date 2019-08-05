#include<bits/stdc++.h>
#define ll long long
using namespace std;
string single(int n)
{
    string s[]= {"0","1","twenty","thirty","forty","fifty","sixty","seventy",
                 "eighty","ninety"
                };
    return s[n];
}
string doub(int n)
{
    string s[]= {"zero","one","two","three","four","five","six","seven",
                 "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen",
                 "sixteen","seventeen", "eighteen","nineteen"
                };
    return s[n];
}

int main()
{
    int n;
    cin>>n;
    if(n<=19)
    {
        cout << doub(n);
    }
    else if(n%10==0 && n>=2)
    {
        cout << single(n/10) << endl;
    }
    else
    {
        int f=n%10;
        n/=10;
        int s=n%10;
        cout << single(s) << "-" << doub(f);
    }

    return 0;
}
