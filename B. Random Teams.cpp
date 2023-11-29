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
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c,c1,x,y,z,p,q;
st s,r;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>n>>m;
    if(n%m==0)
    {
        x=n/m;
        if(x%2==0)
            k=(x-1)*(x/2)*m;
        else
            k=(((x-2)*(x/2))+(x-1))*m;
    }
    else
    {
        p=m-(n%m);
        x=(n/m);
        if(x%2==0)
            c=(x-1)*(x/2)*p;
        else
            c=(((x-2)*(x/2))+(x-1))*p;
        x=(n/m)+1;
        if(x%2==0)
            z=(x-1)*(x/2)*(n%m);
        else
            z=(((x-2)*(x/2))+(x-1))*(n%m);
        k=c+z;
    }
    x=n-m+1;
    if(x%2==0)
            q=(x-1)*(x/2);
        else
            q=((x-2)*(x/2))+(x-1);
    cout<<k<<' '<<q;
}
