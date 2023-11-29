#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=2;i*i<x;i++)
#define    lp2   for(i=0;i<k;i++)
#define    lp3   for(j=0;j<t;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y;
db z;
int main()
{
    fast;
    cin>>t;
    lp3
    {
        cin>>n;
        x=sqrt(n);
        lp1
            if(n%i==0)
                break;
        if(x*x==n && n>1 && i*i>x)
            yes
        else
            no
    }
}
