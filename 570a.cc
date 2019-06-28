
 #include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x;
    cin>>n;
    x=n;

    while(1)
    {
    x=n;
     int sum=0;
        while(x>0)
        {
            sum+=x%10;
            x/=10;
        }
        if(sum%4==0){
          cout << n << endl;
          break;
        }
        n++;
    }

    return 0;
}
