#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=30;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    pb    push_back
#define    tata  return 0;
ll n,m,t,i,j,k,x=19734567876556,y,z;
st s,r,p,q;
map<st,ll>mp;
vector<ll>a,b,c,ab,bc,ac,abc;
int main()
{
    fast;
    cin>>n;
    lp1
    {
        cin>>m>>s;
        sort(s.begin(),s.end());
        if(s=="A")
            a.pb(m);
        else if(s=="B")
            b.pb(m);
        else if(s=="C")
            c.pb(m);
        else if(s=="AB")
            ab.pb(m);
        else if(s=="AC")
            ac.pb(m);
        else if(s=="BC")
            bc.pb(m);
        else if(s=="ABC")
            abc.pb(m);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    sort(ab.begin(),ab.end());
    sort(ac.begin(),ac.end());
    sort(bc.begin(),bc.end());
    sort(abc.begin(),abc.end());
    z=x;
    if(!a.empty() && !b.empty() && !c.empty())
        z=min(z,a[0]+b[0]+c[0]);
    if(!a.empty() && !bc.empty())
        z=min(z,a[0]+bc[0]);
    if(!b.empty() && !ac.empty())
        z=min(z,b[0]+ac[0]);
    if(!c.empty() && !ab.empty())
        z=min(z,c[0]+ab[0]);
    if(!ab.empty() && !ac.empty())
        z=min(z,ab[0]+ac[0]);
    if(!ab.empty() && !bc.empty())
        z=min(z,ab[0]+bc[0]);
    if(!ac.empty() && !bc.empty())
        z=min(z,ac[0]+bc[0]);
    if(!abc.empty())
        z=min(z,abc[0]);
    if(z==x)
        cout<<"-1";
    else
        cout<<z;
}
