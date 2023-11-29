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
#define    lp3   for(j=1;j<=y;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
ll n,m,t,i,j,k,c=0,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>n>>k;
    ll a[100000]={0};
    lp1
    {
        cin>>s;
        x=s.size();
        a[x]++;
    }
    cin>>r;
    y=r.size();
    lp3
        z=z+a[j];
    m=z-a[y]+1;
    //cout<<m<<' '<<z;
    p=max(0LL,m-k);
    q=max(0LL,z-k);
    if(p%k)
        c1=(((p/k)+1)*5)+m;
    else
        c1=(((p/k)*5)+m);
    if(q%k)
        c=(((q/k)+1)*5)+z;
    else
        c=(((q/k)*5)+z);
    cout<<c1<<' '<<c;
}
