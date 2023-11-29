#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<x;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n;
        ll a[n+1],b[n+1];
        lp1
            cin>>a[i];
        sort(a,a+n);
        x=n/2;
        c=0;
        lp2
        {
            b[c++]=a[x+j];
            b[c++]=a[x-j-1];
        }
        if(n%2)
            b[n-1]=a[n-1];
        lp1
            cout<<b[i]<<' ';
        cout<<endl;
    }
}
