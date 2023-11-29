#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=0;i<n;i++)
#define    lp2    for(j=0;j<a[i];j++)
#define    wl     while(t--)
ll n,t,i,j,c=10000000,b,x=0;
int main()
{
    cin>>n;
    ll a[n+1];
    lp1
        cin>>a[i];
    lp1
    {
        lp2
        {
            cin>>b;
            x=x+(b*5);
        }
        x=x+(15*a[i]);
        c=min(c,x);
        x=0;
    }
    cout<<c;
}
