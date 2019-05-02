#include<bits/stdc++.h>
using namespace std;
int* print(int *a,int j)
{

    if(j==0) {

        return a;
    }
    else {

        swap(a[j],a[j-1]);
        j--;
        return print(a,j);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    print(a,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
