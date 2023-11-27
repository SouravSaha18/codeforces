#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=30;i>=0;i--)
#define    lp3   for(j=0;j<11;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0,c1=0,x,y,z;
st s,r,p,q;
map<ll,ll>mp;
int main()
{
    cin>>n;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        if(a[i]==0)
            c++;
        else
            c1++;
    }
    if((c1 && c==1) || (n==1 && c1))
        yes
    else
        no
}
