#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);
    int m1=a*60+b;
    int m2=c*60+d;
    int m=m1-m2;
    if(m<0) m+=24*60;
    int h=m/60;
    int mm=m%60;
    if(h<10) cout <<0;

    cout <<h<<":";
    if(mm<10) cout <<0;
    cout<<mm;
    return 0;
}
