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
#define   N             cout<<"NO"<<endl;
#define   subbef(n)     substr(0,n);
#define   subaft(n)     substr(n+1);
#define   subpos(p,n)   subbef(p,n);
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
stack<ll>sc,sk;
pair<ll,ll>pp[30030];
set<st>se,sa;
set<int>::iterator se1;
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    t=1;
    wl(t--)
    {
        cin>>n;
        vector<ll>v;
        mx=INT_MIN;
        c=cc=0;
        lp1(i,0,n)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
            cc=cc+a[i];
            b[i]=a[i];
        }
        lp1(i,0,n)
        {
            if(a[i]==mx)
                x=i,c++;
        }
        cc=cc-mx;
        ll mx1=INT_MIN;
        lp1(i,0,n)
        {
            p=cc-a[i];
            if(p==mx && i!=x)
                v.pb(i+1);
            if(i==x)
                a[i]=0;
            mx1=max(mx1,a[i]);
        }
        if(cc-mx1==mx1)
            v.pb(x+1);
        cout<<v.size()<<endl;
        lp1(i,0,v.size())
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
