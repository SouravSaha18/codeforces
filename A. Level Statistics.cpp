#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(j=1;j<=n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n;
        ll a[n+1],b[n+1];
        a[0]=0;
        b[0]=0;
        k=0;
        lp1
        {
            cin>>a[i]>>b[i];
            /*if(a[i]<b[i])
                k=1;*/
        }
        lp2
        {
            x=a[j]-a[j-1];
            y=b[j]-b[j-1];
            if(x<0 or y<0 or y>x)
                k=1;
        }
        if(k)
            no
        else
            yes
    }
}
