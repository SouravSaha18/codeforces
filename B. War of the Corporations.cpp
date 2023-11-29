#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;)
#define    lp2   for(i=30;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    tata  return 0;
ll n,m,t,i,j,k,c,x,y,z;
st s,r,p,q;
map<st,ll>mp;
int main()
{
    fast;
    cin>>s>>r;
    n=s.size();
    m=r.size();
    lp1
    {
        if(s.substr(i,m)==r)
        {
            c++;
            i=i+m;
        }
        else
            i++;
    }
    cout<<c;
}
