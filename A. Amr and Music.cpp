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
#define   on            cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[250002],b[250002],c[5556365];
map<ll,ll>mp,mq;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>k;
    lp1(i,0,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    srt(a,n)
    lp1(i,0,n)
    {
        cc=cc+a[i];
        bb=bb+a[i];
        if(cc>k)
        {
            m=i;
            x=a[i-1];
            break;
        }
    }
    //cout<<cc<<endl;
    if(bb<=k)
    {
        cout<<n<<endl;
        lp1(i,1,n+1)
            cout<<i<<' ';
        haha
    }
    lp1(i,0,m)
    {
        if(a[i]==x)
            mp[x]++;
    }
    y=mp[x];
    //cout<<x<<' '<<y;
    cout<<m<<endl;
    lp1(i,0,n)
    {
        if(b[i]<x)
            cout<<i+1<<' ';
        else if(b[i]==x && y)
        {
            cout<<i+1<<' ';
            y--;
        }
    }
}
