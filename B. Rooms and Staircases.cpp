#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=1;i<n;i++)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0;
ll x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n;
        x=0;
        ch a[n+1];
        lp1
        {
            cin>>a[i];
            if(a[i]=='1')
                x=max(x,max((i+1),(n-i)));
        }
        if(x)
            cout<<(x*2)<<endl;
        else
            cout<<n<<endl;
    }
}
