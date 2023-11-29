#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
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
    cin>>n;
    ll a[n+1];
    lp1
        cin>>a[i];
    lp1
    {
        p=0;
        q=554546798092798;
        if(i==1)
            p=abs(a[i]-a[i+1]);
        else
        {
            p=abs(a[i-1]-a[i]);
            q=abs(a[i]-a[i+1]);
        }
        c=0;
        z=0;
        if(i==n)
            c=abs(a[1]-a[i]);
        else
        {
            c=abs(a[1]-a[i]);
            z=abs(a[i]-a[n]);
        }
        cout<<min(p,q)<<' '<<max(c,z)<<endl;
    }
}
