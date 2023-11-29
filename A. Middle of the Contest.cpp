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
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[250002],b[250002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast;
    scanf("%lld:%lld",&x,&p);
    scanf("%lld:%lld",&y,&q);
    if(q-p==0)
    {
        c=y-x;
        if(c%2)
            d=p+30;
        else
            d=p;
    }
    else if(q-p>0)
    {
        c=y-x;
        if(c%2)
            d=p+((q-p)/2)+30;
        else
            d=p+((q-p)/2);
    }
    else
    {
        c=y-x;
        if(c%2)
            d=p-(p-q)/2+30;
        else
            d=p-(p-q)/2;
    }
    n=x+c/2+1;
    m=x+c/2;
    z=d-60;
    if(d>59)
    {
        if(n<10)
            cout<<"0"<<n<<":";
        else
            cout<<n<<":";
        if(z<10)
            cout<<"0"<<z;
        else
            cout<<z;
    }
    else
    {
        if(m<10)
            cout<<"0"<<m<<":";
        else
            cout<<m<<":";
        if(d<10)
            cout<<"0"<<d;
        else
            cout<<d;
    }
}
