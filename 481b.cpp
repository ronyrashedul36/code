
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<char> v;
    vector<char>::iterator it=v.begin();
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++) {

        v.push_back(s[i]);
    }

    while(1) {
        it=v.begin();
        bool b = true;
        int x=1;
        for(int i=0;i<v.size();i++,it++) {
            if(x == 3) {
                x=1;
                b=false;
                v.erase(it);
            }
            if(v[i]==v[i+1] && v[i] == 'x') {
                x++;
            }
            else {
                x=1;
            }
        }
      if(b) break;
    }
    ///cout << v.size() << endl;
    cout << n-v.size() << endl;
    return 0;
}
