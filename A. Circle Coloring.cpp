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
ll e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002],c[232322],d[77657];
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
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
            cin>>c[i];
        d[0]=a[0];
        cc=1;
        for(i=1;i<n;i++)
        {
            if(a[i]==d[i-1])
                d[i]=b[i];
            else
                d[i]=a[i];
        }
        if(d[0]==d[n-1])
        {
            if(d[n-1]==a[n-1])
            {
                if(b[n-1]==d[n-2])
                    d[n-1]=c[n-1];
                else
                    d[n-1]=b[n-1];
            }
            else
            {
                if(a[n-1]==d[n-2])
                    d[n-1]=c[n-1];
                else
                    d[n-1]=a[n-1];
            }
        }
        for(i=0;i<n;i++)
            cout<<d[i]<<' ';
        cout<<endl;
    }

}
