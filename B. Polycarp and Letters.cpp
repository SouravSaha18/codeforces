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
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<ch>se;
int main()
{
    fast;
    cin>>n>>s;
    lp1
    {
        if(s[i]>='a' && s[i]<='z')
            se.insert(s[i]);
        else
        {
            x=se.size();
            c=max(c,x);
            se.clear();
        }
        if(i==n-1)
        {
            x=se.size();
            c=max(c,x);
        }
    }
    cout<<c;
}