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
#define    lp3   for(j=1;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one    cout<<"-1"<<endl;
ll n,m,t,i,j,k,c=3456789,c1=0,x,y,z;
st s,r,p,q;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>n;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        c=min(c,a[i]);
    }
    if(n==1)
        one
    else if(n==2 && a[0]==a[1])
        one
    else
    {
        cout<<"1"<<endl;
        lp1
        {
            if(a[i]==c)
            {
                cout<<(i+1);
                return 0;
            }
        }
    }
}
