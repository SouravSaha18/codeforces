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
ll a[950002],b[950002],mp[7693493];
map<ll,ll>mq;
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
        cin>>n;
        lp1(i,1,n+1)
        {
            cin>>a[i];
            mp[a[i]]=0;
        }
        cc=0;
        b[cc]=0;
        lp1(i,1,n+1)
        {
            if(a[i]!=b[cc])
            {
                b[++cc]=a[i];
                mp[b[cc]]++;
            }
        }
        if(cc==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(mp[b[1]]==1 || mp[b[cc]]==1)
        {
            cout<<1<<endl;
            continue;
        }
        mn=min(mp[b[1]],mp[b[cc]]);
        if(b[1]==b[cc])
            mn=min(mn,mp[b[1]]-1);
        lp1(i,1,cc+1)
            mn=min(mn,mp[b[i]]+1);
        cout<<mn<<endl;
    }
}