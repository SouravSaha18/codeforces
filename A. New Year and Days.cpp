#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll x;
    string a,b;
    cin>>x>>a>>b;
    if(b[0]=='w')
    {
        if(x==5 || x==6)
            cout<<"53";
        else
            cout<<"52";
    }
    else
    {
        if(x==31)
            cout<<"7";
        else if(x==30)
            cout<<"11";
        else
            cout<<"12";
    }
}
