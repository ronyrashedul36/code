#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int result=n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                while(n%i==0) n/=i;
                result-=result/i;
            }
        }
        if(n>1) result-=result/n;
        cout <<result << endl;
    }
    return 0;
}
