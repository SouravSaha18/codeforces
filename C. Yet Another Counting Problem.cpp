#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<48;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>x>>y>>n;
        k=x*y;
        lp1
        {
            mp[i]=0;
            if((i%x)%y!=(i%y)%x)
                mp[i]++;
            mp[i]=mp[i]+mp[i-1];
            cout<<mp[i]<<" ";
        }
        lp3
        {
            cin>>p>>q;
            p--;
            c=(mp[k-1]*(p/k))+mp[p%k];
            z=(mp[k-1]*(q/k))+mp[q%k];
            //cout<<c<<" "<<z<<endl;
            cout<<z-c<<' ';
        }
        cout<<endl;
    }
}
