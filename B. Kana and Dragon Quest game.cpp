
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<4;i++)
#define    lp2   for(i=0;i<n;i++)
#define    lp3   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c,d,a[4],b;
ll x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n>>m>>k;
        while(m)
        {
            if(n/2<10)
                break;
            n=(n/2)+10;
            m--;
        }
        while(k)
        {
            n=n-10;
            k--;
            if(n<=0)
                break;
        }
        if(n<=0)
            yes
        else
            no
    }
}
