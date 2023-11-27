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
#define   wl(t)         while(t--)
#define   pb            push_back
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   Y             cout<<"YES"<<endl;
#define   N             cout<<"NO"<<endl;
#define   O             cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359
,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[250002],b[250002];
map<ll,ll>mp,mq;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>y;
    if(y-n<2)
    {
        O
        haha
    }
    if(n%2==0)
        cout<<n<<' '<<n+1<<' '<<n+2;
    else
    {
        if(y-n==2)
            O
        else
            cout<<n+1<<' '<<n+2<<' '<<n+3;
    }
}
