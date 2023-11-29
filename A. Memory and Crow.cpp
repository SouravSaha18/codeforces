#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=0;i<n;i++)
#define    lp2    for(j=0;j<n-1;j++)
#define    wl     while(t--)
ll n,m,t,i,j,c,b,x;
int main()
{
    cin>>n;
    ll a[n+1];
    lp1
        cin>>a[i];
    lp2
    {
        x=a[j]+a[j+1];
        cout<<x<<' ';
    }
    cout<<a[n-1];
}
