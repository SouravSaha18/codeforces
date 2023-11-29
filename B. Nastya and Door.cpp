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
#define    lp3   for(j=0;j<n-k+1;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>n>>k;
        c=0;
        y=1;
        ll a[n+1];
        lp1
            cin>>a[i];
        for(i=1;i<n-1;i++)
        {
            mp[i]=0;
            if(a[i]>a[i-1] && a[i]>a[i+1] && i!=n)
                mp[i]++;
            mp[i]=mp[i-1]+mp[i];
        }
        lp3
        {
            x=mp[j+k-2]-mp[j];
            if(x>c)
            {
                c=x;
                y=j+1;
            }
        }
        cout<<(c+1)<<' '<<y<<endl;
    }
}
