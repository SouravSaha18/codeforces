#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i='a';i<='z';i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,j,k,c=0,c1,x,y,z=0,p,q;
st s,r;
ch i;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>n>>k;
    t=n/k;
    wl
    {
        c=0;
        lp1
        {
            c++;
            cout<<i;
            if(c==k)
                break;
        }
    }
    if(n%k)
    {
        c=0;
        lp1
        {
            c++;
            cout<<i;
            if(c==n%k)
                break;
        }
    }
}
