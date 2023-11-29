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
#define    lp3   for(j=1;j<=p;j++)
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
        cin>>n>>k;
        for(i=0;i<=n;i++)
            mp[i]=0;
        ll a[n+1];
        z=0;
        c=0;
        y=0;
        x=0;
        lp1
        {
            cin>>a[i];
            c=max(c,a[i]);
            mp[a[i]]++;
            if(mp[a[i]]==1)
                z++;
        }
        p=max(k,c);
        if(z>k)
            one
        else if(z==k)
        {
            cout<<(n*k)<<endl;
            while(n--)
            {
                lp3
                {
                    if(mp[j])
                        cout<<j<<' ';
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<(n*k)<<endl;
            y=k-z;
            while(n--)
            {
                x=0;
                lp3
                {
                    if(mp[j])
                        cout<<j<<' ';
                    else if(!mp[j] && x<y)
                    {
                        cout<<j<<' ';
                        x++;
                    }
                }
            }
            cout<<endl;
        }
    }
}
