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
#define    lp3   for(j=0;j<m;j++)
#define    wl    while(n--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c,c1,x,y,z=0,p,q;
st s,r;
map<st,st>mp;
int main()
{
    fast;
    cin>>n>>m;
    lp3
    {
        cin>>s>>r;
        x=s.size();
        y=r.size();
        if(y<x)
            mp[s]=r;
        else
            mp[s]=s;
    }
    wl
    {
        cin>>s;
        cout<<mp[s]<<' ';
    }
}
