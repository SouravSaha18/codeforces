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
ll c,d,e,f,g,h,i,j,k,mx1,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002];
map<string,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    wl(t--)
    {
        cin>>s>>r;
        n=s.size();
        m=r.size();
        cc=0;
        mx=mx1=0;
        if(n>=m)
        {
            lp1(i,0,n)
            {
                lp1(j,0,m)
                {
                    if(s[i+j]==r[j])
                    {
                        cc++;
                        mx=max(mx,cc);
                        //cout<<mx<<" ";
                    }
                    else
                        cc=0;
                }
                cc=0;
            }
        }
        if(m>=n)
        {
            cc=0;
            lp1(i,0,m)
            {
                lp1(j,0,n)
                {
                    if(r[i+j]==s[j])
                    {
                        cc++;
                        mx1=max(mx1,cc);
                    }
                    else
                        cc=0;
                }
                cc=0;
            }
        }
        //cout<<mx<<' '<<mx1<<" ";
        mx=max(mx,mx1);
        p=n+m-(2*mx);
        cout<<p<<endl;
    }
}
