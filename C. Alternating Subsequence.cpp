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
        ll a[n+1];
        lp1
            cin>>a[i];
        c=0;
        x=0;
        y=-123465375576767;
        lp1
        {
            if(a[i]>0)
            {
                x=max(x,a[i]);
                if(a[i+1]<0 || i==n-1)
                {
                    c=c+x;
                    x=0;
                }
            }
            else
            {
                y=max(y,a[i]);
                if(a[i+1]>0 || i==n-1)
                {
                    c=c+y;
                    y=-432670954878776;
                }
            }
        }
        cout<<c<<endl;
    }
}

