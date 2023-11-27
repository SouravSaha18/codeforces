#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==1||i==2||i==3||i==5||i==8||i==13||i==21||i==34||i==55||i==89||i==144||i==233||i==377||i==610||i==987)
            cout<<"O";
        else
            cout<<"o";
    }
}
