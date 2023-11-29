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
#define    lp3   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,d,c1,x=0,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>n;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        c=c+a[i];
        a[i]=c;
    }
    if(c%3 && n<3)
    {
        cout<<"0";
        haha
    }
    lp3
    {
        if(a[j]*3==c*2)
            x=x+z;
        if(a[j]*3==c)
            z++;
    }
    cout<<x;
}
