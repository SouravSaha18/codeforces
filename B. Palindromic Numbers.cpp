#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define   ll            long long int
#define   db            double
#define   ch            char
#define   st            string
#define   lp1(i,a,n)    for(i=a;i<=n;i++)
#define   lp2(i,n,a)    for(i=n;i>=a;i--)
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
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002];
map<string,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    cin>>t;
    wl(t--)
    {
        cin>>n>>s;
        cc=0;
        ch pp=9+'0';
        r="";
        lp1(i,0,n-1)
            r=r+pp;
        if(s[0]=='9')
        {
            ch pp=1+'0';
            r="";
            lp1(i,0,n)
                r=r+pp;
        }
        //cout<<r<<endl;
        //reverse(s.begin(),s.end());
        m=r.size();
        //reverse(r.begin(),r.end());
        cc=0;
        u="";
        if(n==m)
        {
            lp2(i,n-1,0)
            {
                ch uu=r[i]-s[i]+'0';
                u=uu+u;
            }
        }
        else
        {
            ch nn=0+'0';
            s=nn+s;
            lp2(i,n,1)
            {
                p=r[i]-s[i]-cc;
                if(p<0)
                {
                    cc=1;
                    p=p+10;
                }
                else
                    cc=0;
                ch uu=p+'0';
                u=uu+u;
            }
        }
        //reverse(u.begin(),u.end());
        cout<<u<<endl;
    }
}

