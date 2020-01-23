#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > v;

        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }


        int i=0;
        sort(v.begin(), v.end());
        int f=v[0].first;
        int s=v[0].second;
        for( i=1; i<v.size(); i++)
        {
            ///cout <<f<< " " <<  v[i].first << " " <<s << " "<< v[i].second << endl;
            if(f<=v[i].first && s<=v[i].second)
            {

                continue;
            }
            break;

        }
        //cout << i << endl;
        if(i!=v.size())
        {
            cout << "NO" << endl;
            continue;
        }
        string st="";
        bool b = false;
        for( i=0; i<v.size(); i++)
        {
            if(i == 0 && (v[i].first>0 || v[i].second>0)) b = true;
            if(v[i].first>0 && i == 0 && b)
            {
                int d=v[i].first-0;
                string r="R";
                for(int j=0; j<d; j++)
                    st+=r;
            }
            if(v[i].second>0 && i == 0 && b)
            {
                int d=v[i].second-0;
                string u="U";
                for(int j=0; j<d; j++)
                    st+=u;
            }
            if(i>0 && v[i].first>v[i-1].first)
            {
                int d=v[i].first-v[i-1].first;
                string r="R";
                for(int j=0; j<d; j++)
                    st+=r;
            }
            if(i>0 && v[i].second>v[i-1].second)
            {
                int d=v[i].second-v[i-1].second;
                string u="U";
                for(int j=0; j<d; j++)
                    st+=u;
            }
        }
        cout << "YES" << endl;
        cout << st << endl;

    }
    return 0;
}
