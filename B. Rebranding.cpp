#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<26;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,c1,x,y,z=0,p,q;
st s,r;
ch u,v;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    r="abcdefghijklmnopqrstuvwxyz";
    cin>>n>>m>>s;
    while(m--)
    {
        cin>>u>>v;
        lp1
        {
            if(r[i]==u)
                r[i]=v;
            else if(r[i]==v)
                r[i]=u;
        }
    }
    lp3
        cout<<r[s[j]-'a'];
}
