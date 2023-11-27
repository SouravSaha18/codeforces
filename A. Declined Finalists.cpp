#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n;
    cin>>n;
    ll a[n+1],i,x=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>x)
            x=a[i];
    }
    if(x<25)
        cout<<"0";
    else
        cout<<(x-25);
}
