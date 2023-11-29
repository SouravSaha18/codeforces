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
//ll a[250002][243434],b[250002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    cin>>t;
    wl(t--)
    {
        cin>>n>>m;
        c=0;
        ll a[n+1][m+1];
        lp1(i,0,n)
        {
            k=0;
            lp1(j,0,m)
            {
                cin>>a[i][j];
                if(a[i][j]==0)
                    k++;
            }
            if(k==m)
                c++;
        }
        d=0;
        lp1(j,0,m)
        {
            k=0;
            lp1(i,0,n)
            {
                if(a[i][j]==0)
                    k++;
            }
            if(k==n)
                d++;
        }
        //cout<<c<<' '<<d;
        p=min(c,d);
        if(p%2)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
}
