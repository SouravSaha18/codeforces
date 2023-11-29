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
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m=0,t,i,j,k,c=0,d,c1,x,y,z=234598765443467,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>n;
    lp1
    {
        cin>>x;
        mp[x]++;
        m=max(m,x);
        z=min(z,x);
    }
    cout<<max(0LL,(n-mp[m]-mp[z]));
}
