#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=x;i<=y;i++)
#define    lp2   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll baal(ll n)
{
    if(n%2==0)
        return n/2;
    else
        return n*(-1)+baal(n-1);
}
ll m,t,i,j,x,c,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>x>>y;
        c=baal(y)-baal(x-1);
        cout<<c<<endl;
    }
}
