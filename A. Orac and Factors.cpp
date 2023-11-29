#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=3;i<=sqrt(n);i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
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
    cin>>t;
    wl
    {
        cin>>n>>k;
        x=0;
        if(n%2==0)
        {
            x=n+(2*k);
            cout<<x<<endl;
        }
        else
        {
            lp1
            {
                if(n%i==0)
                {
                    x=i;
                    break;
                }
            }
            if(!x)
                x=n;
            x=x+n+((k-1)*2);
            cout<<x<<endl;
        }
    }
}
