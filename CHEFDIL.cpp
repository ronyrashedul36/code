#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i,j,cnt=0;
        cin>>s;
        j=s.size();
        while(1)
        {
            cnt=0;
            bool b=true;
            for(i=0; i<j; i++)
            {
                if(s[i]=='1')
                {
                    b=false;
                    s[i]='2';
                    if(s[i-1]!='2' && i>0)
                    {
                        if(s[i-1]=='1')
                            s[i-1]='0';
                        else
                            s[i-1]='1';
                    }
                    if(s[i+1]!='2' && i<j-1)
                    {
                        if(s[i+1]=='1')
                            s[i+1]='0';
                        else
                            s[i+1]='1';
                    }
                }
            }

            if(b)
            {
                bool c=true;
                for(i=0; i<j; i++)
                {
                    if(s[i] == '1' || s[i] == '0')
                    {
                        cout << "LOSE";
                        c=false;
                        break;
                    }
                }
                if(c)
                {
                    cout << "WIN" ;
                }
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
