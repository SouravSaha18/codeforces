#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=k+1;j<=n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>n>>k;
    ll a[n+1];
    c=0;
    lp1
    {
        cin>>a[i];
        c=c+a[i];
        mp[i+1]=c;
    }
    x=mp[k];
    y=1;
    lp3
    {
        if(mp[j]-mp[j-k]<x)
        {
            x=mp[j]-mp[j-k];
            y=j-k+1;
        }
    }
    cout<<y;
}

