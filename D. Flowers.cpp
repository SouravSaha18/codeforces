#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=100000;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(n--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp,mq;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>k;
    mp[0]=1;
    mq[0]=0;
    lp1
    {
        if(i<k)
            mp[i]=1;
        else
            mp[i]=((mp[i-1]+mp[i-k])%1000000007);
        mq[i]=((mq[i-1]+mp[i]));
    }
    wl
    {
        cin>>x>>y;
        p=(mq[y]-mq[x-1]);
        cout<<(p%1000000007)<<endl;
    }
}
