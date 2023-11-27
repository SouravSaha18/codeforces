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
ll c,d,r,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,md=1000000007,aa=0,bb=0,cc=0;
st s,u,v,w;
ll a[250002],b[250002];
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    cin>>t;
    wl(t--)
    {
        cin>>n>>s;
        map<pair<ll,ll>,ll>mp,mq;
        x=y=0;
        l=0,r=n+1;
        mp[{0,0}]=1;
        lp1(i,0,n)
        {
            if(s[i]=='R')
                x++;
            if(s[i]=='L')
                x--;
            if(s[i]=='U')
                y++;
            if(s[i]=='D')
                y--;
            if(mp[{x,y}])
            {
                p=i-mp[{x,y}];
                q=r-l;
                if(p<q)
                {
                    l=mp[{x,y}];
                    r=i;
                }
            }
            mp[{x,y}]=i+2;
        }
        if(!l)
            on
        else
            cout<<l<<' '<<r+1<<endl;
    }
}
