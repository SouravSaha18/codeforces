#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define   ll            long long int
#define   db            double
#define   ch            char
#define   st            string
#define   lp1(i,a,n)    for(i=a;i<n;i++)
#define   lp2(i,n,a)    for(i=n;i>=a;i--)
#define   wl            while
#define   F             first
#define   S             second
#define   PI            3.14159265359
#define   pb            push_back
#define   all(a)        a.begin(),a.end()
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   up(a,n,val)   upper_bound(a,a+n,val)-a;
#define   Y             cout<<"YES"<<endl;
#define   N             cout<<"NO"<<endl;
#define   subbef(n)     substr(0,n);
#define   subaft(n)     substr(n+1);
#define   subpos(p,n)   subbef(p,n);
#define   on            cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
db c,d,e,f,g,h,i,j,k,l,m,n,o,q,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002];
ll por(ll n,ll p){if(p==0) return 1;if(p==1)return n;if(p%2)return por(n,p-1)*n;else{ll x=por(n,p/2);return x*x;}}
ll modpow(ll a,ll b,ll m){ll ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
ll nsum(ll num){return (num*(num+1))/2;}
map<ll,ll>mp,mq;
queue<ll>qu,qe;
stack<ll>sc,sk;
vector< pair<ll,ll> >pp;
set<st>se,sa;
set<int>::iterator se1;
int main()
{
    fast
    ll t,p;
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    wl(t--)
    {
        cin>>x>>y>>n>>m;
        cc=0;
        if(floor((x*m)/(y*n))!=ceil((x*m)/(y*n)))
            cc++;
        if(floor((y*n)/(x*m))!=ceil((y*n)/(m*x)))
            cc++;
        if((!x & !n) || (x*m==y*n))
            cc=0;
        else if(!x || !n)
            cc=1;
        cout<<cc<<endl;
    }
}
