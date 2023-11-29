#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>n;
        ll a[n+1],b[n+1];
        c=0;
        m=2345678987675;
        lp1
            cin>>a[i]>>b[i];
        a[n]=a[0];
        lp1
        {
            if(a[i+1]>b[i])
            {
                c=c+(a[i+1]-b[i]);
                m=min(m,b[i]);
            }
            m=min(m,a[i+1]);
        }
        cout<<(c+m)<<endl;
    }
}
