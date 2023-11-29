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
#define    lp3   for(j=1;j<=x;j++)
#define    wl    while(t--)
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
    cin>>n;
    ll a[n+1];
    x=0;
    lp1
    {
        cin>>a[i];
        mp[a[i]]++;
        x=max(x,a[i]);
    }
    lp3
    {
        c=c+mp[j];
        mp[j]=c;
    }
    cin>>t;
    wl
    {
        cin>>m;
        if(m>x)
            cout<<mp[x]<<endl;
        else
            cout<<mp[m]<<endl;
    }
}

