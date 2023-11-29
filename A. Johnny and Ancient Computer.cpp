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
ll a[250002],b[250002];
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
        cin>>x>>y;
        if(x<y)
            swap(x,y);
        bb=0,cc=0;
        wl(1)
        {
            if(x==y)
                break;
            if(x%8==0 && x/8>=y)
                x/=8;
            else if(x%4==0 && x/4>=y)
                x/=4;
            else if(x%2==0 && x/2>=y)
                x/=2;
            else
            {
                cc=1;
                break;
            }
            bb++;
        }
        if(cc)
            on
        else
            cout<<bb<<endl;
    }
}
