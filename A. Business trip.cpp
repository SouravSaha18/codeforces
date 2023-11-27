#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<12;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k=1,c=0,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
int main()
{
    fast;
    cin>>n;
    ll a[13];
    lp1
        cin>>a[i];
    sort(a,a+12);
    reverse(a,a+12);
    if(!n)
    {
        cout<<"0";
        haha
    }
    lp1
    {
        z++;
        c=c+a[i];
        if(c>=n)
        {
            k=0;
            break;
        }
    }
    if(k)
        one
    else
        cout<<z;
}
