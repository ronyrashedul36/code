#include<bits/stdc++.h>
using namespace std;
int even(string str)
{
    int len = str.size();
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        int temp = str[i] - '0';
        if (temp % 2 == 0)
            count += (i + 1);
    }

    return count;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout << even(s);
    return 0;
}
