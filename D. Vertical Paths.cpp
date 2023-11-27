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
#define   all(a)        a.begin(),a.end()
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   up(a,n,val)   upper_bound(a,a+n,val)-a;
#define   Y             cout<<"YES"<<endl;
#define   NS             cout<<"NO"<<endl;
#define   subbef(n)     substr(0,n);
#define   subaft(n)     substr(n+1);
#define   subpos(p,n)   subbef(p,n);
#define   on            cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll c,d,e,f,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,w;
ll a[950002],b[950002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
stack<ll>sc,sk;
pair<ll,ll>pp[30030];
set<st>se,sa;
set<int>::iterator se1;
const int maxn=200009;
bool vis[maxn];
vector<int>v[maxn];

void dfs(ll x)
{
    if(vis[x])
        return;
    v[cc].pb(x);
    vis[x]=true;
    dfs(mp[x]);
}

int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    wl(t--)
    {
        cin>>n;
        lp1(i,1,cc+1)
            v[i].clear();
        cc=y=0;
        lp1(i,1,n+1)
            vis[i]=false,mq[i]=0;
        lp1(i,1,n+1)
        {
            cin>>x;
            mp[i]=x;
            if(i!=x)
                mq[x]++;;
        }
        lp1(i,1,n+1)
        {
            if(!mq[i])
            {
                cc++;
                dfs(i);
            }
        }
        cout<<cc<<endl;
        lp1(i,1,cc+1)
        {
            cout<<v[i].size()<<endl;
            lp2(j,v[i].size()-1,0)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
}
