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
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
ll M=887675435789;
pair<ll,ll>pp[30030];
set<st>se,sa;
ll fuck(ll ss,ll df)
{
    c=0;
    ll c1=0,c2=0;
    for(p=ss;c<n;p+=df,c++)
    {
        if(p==x)
            c1=1;
        if(p==y)
            c2=1;
    }
    if(c1 && c2)
        return p;
    else
        return M;
}
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    wl(t--)
    {
        cin>>n>>x>>y;
        mn=M;
        aa=0;
        bb=0;
        lp1(i,1,x+1)
        {
            lp1(j,1,y-x+1)
            {
                l=fuck(i,j);
                if(l<mn)
                {
                    mn=l;
                    aa=i;
                    bb=j;
                }
            }
        }
        lp1(j,1,n+1)
        {
            cout<<aa<<' ';
            aa=aa+bb;
        }
        cout<<endl;
    }
}
