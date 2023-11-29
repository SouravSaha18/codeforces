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
        cin>>n>>k;
        map<ll,ll>mp,mq;
        cc=0;
        lp1(i,0,n)
        {
            cin>>a[i];
            x=k-a[i];
            if(x<0)
            {
                mp[a[i]]=mq[i]=1;
                continue;
            }
            if(x==a[i])
            {
                if(cc%2)
                    mq[i]=2;
                else
                    mq[i]=1;
                cc++;
            }
            else
            {
                if(mp[a[i]]==0)
                    mp[a[i]]=mq[i]=1;
                else
                    mq[i]=mp[a[i]];
                if(mp[x]==0)
                    mp[x]=mq[i]=2;
                else
                    mq[i]=mp[x];
            }
        }
        lp1(i,0,n)
            cout<<mq[i]-1<<' ';
        cout<<endl;
    }
}
