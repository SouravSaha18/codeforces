#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n+1],i,c,x=100000000;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]<=k && a[i]!=0)
        {
            c=abs(m-i)*10;
            x=min(x,c);
        }
    }
    cout<<x;
}
