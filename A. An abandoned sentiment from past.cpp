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
#define    lp3   for(j=0;j<k;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(b,b+k);
#define    yes   cout<<"Yes"<<endl;
#define    no    cout<<"No"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>n>>k;
    ll a[n+1],b[k+1];
    lp1
        cin>>a[i];
    lp3
        cin>>b[j];
    srt
    reverse(b,b+k);
    lp1
    {
        if(!a[i])
        {
            a[i]=b[c];
            c++;
        }
    }
    a[n]=98478362782145;
    lp1
    {
        if(a[i]>a[i+1])
        {
            yes
            haha
        }
    }
    no
}
