#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(j=x;j<y;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,h,m,t,s,i,j,c=0,x,y,z,b=0,d;
int main()
{
    cin>>n;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        b=b+a[i];
    }
    cin>>s>>t;
    x=min(s,t);
    y=max(s,t);
    lp2
        c=c+a[j];
    z=min(c,(b-c));
    cout<<z;
}
