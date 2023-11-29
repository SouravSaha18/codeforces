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
#define    wl    while(1)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>m;
    wl
    {
        if((n+m)<3 || (n<1 || m<1))
            break;
        if(n>m)
        {
            n=n-2;
            m--;
            c++;
        }
        else
        {
            m=m-2;
            n--;
            c++;
        }
    }
    cout<<c;
}
