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
ll d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[250002],b[250002],c[250002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    cin>>n>>k;
    aa=0;
    bb=0;
    cc=0;
    wl(n--)
    {
        cin>>x>>y>>z;
        if(y && z)
        {
            a[aa]=x;
            aa++;
        }
        else if(y && !z)
        {
            b[bb]=x;
            bb++;
        }
        else if(!y && z)
        {
            c[cc]=x;
            cc++;
        }
    }
    if(aa+bb<k || aa+cc<k)
    {
        cout<<-1;
        haha
    }
    sort(a,a+aa);
    sort(b,b+bb);
    sort(c,c+cc);
    x=0;
    y=0;
    z=0;
    m=0;
    cc=min(cc,bb);
    wl(k--)
    {
        p=b[x]+c[x];
        if(p>a[z] && z<aa)
        {
            m=m+a[z];
            z++;
        }
        else if(p<=a[z] && x<cc)
        {
            m=m+p;
            x++;
        }
        else if(p>a[z] && z>=aa)
        {
            m=m+p;
            x++;
        }
        else if(p<=a[z] && x>=cc)
        {
            m=m+a[z];
            z++;
        }
    }
    cout<<m;
}

