#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    scanf("%lld:%lld",&x,&p);
    scanf("%lld:%lld",&y,&q);
    if(y>x)
        n=(x+24)-y;
    else
        n=x-y;
    if(q>p)
    {
        n--;
        m=(p+60)-q;
    }
    else
        m=p-q;
    if(n==-1)
        n=23;
    if(n>9)
        cout<<n;
    else
        cout<<"0"<<n;
    cout<<":";
    if(m>9)
        cout<<m;
    else
        cout<<"0"<<m;
}
