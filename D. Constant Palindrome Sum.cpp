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
#define    lp3   for(j=0;j<n/2;j++)
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
        cin>>n>>k;
        ll a[n+1],b[(n/2)+1]={0};
        lp1
            cin>>a[i];
        lp3
        {
            x=a[j]+a[n-j-1];
            b[j]=x;
        }
        sort(b,b+(n/2));
        c=0;
        for(j=0;j<n/2-1;j++)
        {
            if(a[j]!=a[j+1])
                c++;
        }

    }
}
