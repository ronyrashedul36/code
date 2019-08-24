#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j=1,m;
    cin>>n>>k;
    m=k;
    set<int>s;
    set<int>::iterator it=s.begin();
    int a[n],b[k];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(k>s.size())
    {
        cout <<"NO";
    }
    else
    {
        cout <<"YES"<<endl;
        for(it=s.begin(); it!=s.end() && k; it++)

            for(i=0; i<n; i++)
            {

                if((*it) == a[i])
                {
                    k--;
                    cout << i+1 << " ";
                    break;
                }
            }
    }
    cout << endl;
    return 0;
}
