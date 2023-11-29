#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<m;i++)
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
map<ll,ll>a;
set<st>se;
int main()
{
    fast;
    cin>>n>>m>>t;
    //ll a[n+1]={0};
    a[1]=2;
    lp1
    {
        cin>>k;
        a[k]=1;
    }
    wl
    {
        cin>>p>>q;
        if(a[p]==2 || a[q]==2)
        {
            if(a[p]==1 && !c)
                c=p;
            else if(a[q]==1 && !c)
                c=q;
            swap(a[p],a[q]);
        //cout<<a[p]<<' '<<a[q]<<endl;
            if(a[p]==2)
                x=p;
            else if(a[q]==2)
                x=q;
        }
    }
    if(!x)
        x=1;
    if(c)
        cout<<c;
    else
        cout<<x;
}
