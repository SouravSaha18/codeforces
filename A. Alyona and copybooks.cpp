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
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=9234565774,c1,x,y,z,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>n>>x>>y>>z;
    k=n%4;
    if(!k)
        c=0;
    else if(k==3)
        c=min(c,min(x,min(y+z,3*z)));
    else if(k==2)
        c=min(c,min(y,min(2*x,z*2)));
    else
        c=min(c,min(z,min(x*3,x+y)));
    cout<<c;
}
