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
        x=0;
        y=0;
        c=0;
        lp1
            cin>>a[i];
        lp1
        {
            cin>>b[i];
            if(a[i]>b[i] && x==0)
                c=1;
            else if(a[i]<b[i] && y==0)
                c=1;
            if(a[i]==-1)
                x=1;
            if(a[i]==1)
                y=1;
        }
        if(c==1)
            no
        else
            yes

    }
}
