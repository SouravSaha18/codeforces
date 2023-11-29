#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,p;
    cin>>n>>p;
    ll a[n+1],i,c=1,x=p,m=0;
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>x)
        {
            c++;
        }
        else
        {
            if(c>m)
                m=c;
            c=1;
        }
        x=a[i];
    }
    if(c>m)
        m=c;
    cout<<m;
}
