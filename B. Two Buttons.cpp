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
ll n,m,t,j,k,c;
ll x,y,z;
int main()
{
    fast;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<n-m;
        return 0;
    }
    else
    {
        c=0;
        while(m>n)
        {
            if(m%2==0)
                m=m/2;
            else
                m=m+1;
            c++;
        }
        cout<<c+n-m;
    }
}
