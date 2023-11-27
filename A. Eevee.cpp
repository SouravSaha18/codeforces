#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<8;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757;
st s,r,x="jolteon",y="flareon",p="umbreon",q="leafeon",c="glaceon",d="sylveon";
map<ll,ll>mp;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>r;
    s=r;
    if(n==6)
    {
        cout<<"espeon";
        haha
    }
    if(n==8)
    {
        cout<<"vaporeon";
        haha
    }
    lp1
    {
        if(s[i]=='.')
            s[i]=x[i];
    }
    if(s==x)
    {
        cout<<x;
        haha
    }
    s=r;
    lp1
    {
        if(s[i]=='.')
            s[i]=y[i];
    }
    if(s==y)
    {
        cout<<y;
        haha
    }
    s=r;
    lp1
    {
        if(s[i]=='.')
            s[i]=p[i];
    }
    if(s==p)
    {
        cout<<p;
        haha
    }
    s=r;
    lp1
    {
        if(s[i]=='.')
            s[i]=q[i];
    }
    if(s==q)
    {
        cout<<q;
        haha
    }
    s=r;
    lp1
    {
        if(s[i]=='.')
            s[i]=c[i];
    }
    if(s==c)
    {
        cout<<c;
        haha
    }
    s=r;
    lp1
    {
        if(s[i]=='.')
            s[i]=d[i];
    }
    if(s==d)
    {
        cout<<d;
        haha
    }
}
