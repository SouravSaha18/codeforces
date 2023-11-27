#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n/2;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=1;j<=n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp,mm;
set<st>se;
int main()
{
    fast;
    cin>>n;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        mp[a[i]]++;
        mm[a[i]]++;
    }
    sort(a,a+(n/2));
    lp1
    {
        if(a[i]%2)
        {
            lp3
            {
                if(mp[j]==0 && j%2==0)
                {
                    mp[j]=1;
                    c=c+abs(j-a[i]);
                    break;
                }
            }
        }
    }
    lp1
    {
        if(a[i]%2==0)
        {
            lp3
            {
                //cout<<j<<' ';
                if(mm[j]==0 && j%2)
                {
                    mm[j]=1;
                    z=z+abs(j-a[i]);
                    //cout<<z<<endl;
                    break;
                }
            }
        }
    }
    //cout<<c<<" "<<z<<endl;
    cout<<min(c,z);
}
