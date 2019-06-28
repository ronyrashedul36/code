
#include<bits/stdc++.h>
int a[200010];
using namespace std;
int main()
{
    int q,n,x;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int ans=0;
        map<int,int> m;
        map<int,int>:: iterator it;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            m[x]++;
        }
        int i=0;
        for(it = m.begin(); it!=m.end(); it++)
        {
            a[i++]=it->second;
        }
        sort(a,a+i,greater<int>());

        for(int j=1; j<i; j++)
        {
            if(a[j]>=a[j-1])
                a[j]=a[j-1]-1;
        }
        for(int j=0; j<i; j++)
        {
            if(a[j]<=0)
                break;
            ans+=a[j];
        }

        cout << ans << endl;
    }
    return 0;
}
