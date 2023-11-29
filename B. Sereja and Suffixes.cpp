#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=n-1;i>=0;i--)
#define    lp3   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp,pp;
int main()
{
    fast;
    cin>>n>>m;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    x=0;
    lp2
    {
        if(mp[a[i]])
        {
            x++;
            pp[i]=x;
            mp[a[i]]=0;
        }
        else
            pp[i]=x;
    }
    lp3
    {
        cin>>k;
        cout<<pp[k-1]<<endl;
    }
}
