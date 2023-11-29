#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=0;i<=k;i++)
#define    lp3   for(j=0;j<=k;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0;
ll x,y,z;
int main()
{
    fast;
    cin>>n;
    ll a[n+1];
    lp1
        cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    if(a[0]<a[1]+a[2])
    {
        c=1;
        swap(a[0],a[1]);
    }
    if(c)
    {
        yes
        lp1
            cout<<a[i]<<' ';
    }
    else
        no
}
