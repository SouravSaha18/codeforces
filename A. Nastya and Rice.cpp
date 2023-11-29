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
#define    yes   cout<<"Yes"<<endl;
#define    no    cout<<"No"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c,c1,x,y,z=0,p,q,a,b,d;
st s,r;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>n>>a>>b>>c>>d;
        p=(abs(a-b));
        q=(a+b);
        m=abs(c-d);
        k=c+d;
        y=0;
        z=0;
        for(i=p;i<=q;i++)
        {
            x=i*n;
            if(x>=m)
                y=1;
            if(x<=k)
                z=1;
        }
        if(y && z)
            yes
        else
            no
    }
}
