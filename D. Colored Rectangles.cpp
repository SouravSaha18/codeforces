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
#define   PI            3.14159265359
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
ll d,e,f,g,h,i,j,r,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st s,u,v,w;
ll a[950002],b[950002],c[2010];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>x>>y>>z;
    lp1(i,0,x)
        cin>>a[i];
    lp1(i,0,y)
        cin>>b[i];
    lp1(i,0,z)
        cin>>c[i];
    sort(a,a+x);
    reverse(a,a+x);
    sort(b,b+y);
    reverse(b,b+y);
    sort(c,c+z);
    reverse(c,c+z);
    d=0;
    wl(1)
    {
        if((aa==x && bb==y) || (bb==y && cc==z) || (cc==z && aa==x))
            break;
        p=a[aa]*b[bb];
        q=b[bb]*c[cc];
        r=c[cc]*a[aa];
        f=max(p,max(q,r));
        if(p==f)
        {
            d=d+p;
            aa++;
            bb++;
        }
        else if(q==f)
        {
            d=d+q;
            cc++;
            bb++;
        }
        else
        {
            d=d+r;
            aa++;
            cc++;
        }
    }
    cout<<d;
}
