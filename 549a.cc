#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k,sum,cnt,m,y;
    cnt=sum=m=y=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        if(a[i] == 0) sum++;
        else cnt++;
    }
    for(i=0;i<n;i++){
        if(a[i] == 0 ) m++;
        else y++;
        if(m==sum) {
            k=i;
            break;
        }
        if(y == cnt) {
            k=i;
            break;
        }
    }
    cout << k+1 << endl;

    return 0;
}
