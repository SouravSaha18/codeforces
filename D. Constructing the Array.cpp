#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define   ll            long long int
#define   db            double
#define   ch            char
#define   st            string
#define   lp1(i,a,n)    for(i=a;i<n;i++)
#define   lp2(i,n,a)    for(i=n-1;i>=a;i--)
#define   wl            while
#define   pb            push_back
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   up            upper_bound(a,a+n,b[i])-a;
#define   Y             cout<<"YES"<<endl;
#define   N             cout<<"NO"<<endl;
#define   on            cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll c,d,e,f,g,h,i,j,r,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,md=1000000007,aa=0,bb=0,cc=0;
st s,u,v,w;
ll a[250002],b[250002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
void sou(ll l,ll r)
{
    if(l>r)
        return;
    ll x=(l+r)/2;
    pp[x].first=l-r;
    pp[x].second=x;
    //cout<<l<<' '<<r<<' '<<pp[x].first<<' '<<pp[x].second<<endl;
    sou(l,x-1);
    sou(x+1,r);
}
int main()
{
    fast
    cin>>t;
    c=1;
    wl(t--)
    {
        cin>>n;
        sou(c,n);
        sort(pp+1,pp+n+1);
        lp1(i,1,n+1)
            a[pp[i].second]=i;
        lp1(i,1,n+1)
            cout<<a[i]<<' ';
        cout<<endl;
    }
}