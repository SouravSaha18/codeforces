#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<n;i++)
#define    lp2   for(j=i+2;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y;
db z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n;
        c=0;
        cin>>x;
        lp1
        {
            cin>>y;
            if(y<x)
                c=max(c,(x-y));
            x=max(x,y);
        }
        c++;
        z=log2(c);
        k=z;
        if(z-k==0)
            cout<<k<<endl;
        else
            cout<<(k+1)<<endl;
    }
}
