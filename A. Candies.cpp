#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=2;i<=n;i=i+2)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=1;j<=n-3;j=j+2)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>n;
        c=3;
        x=4;
        while(1)
        {
            if(n%c==0)
                break;
            c=c+x;
            x=x*2;
        }
        cout<<(n/c)<<endl;
    }
}
