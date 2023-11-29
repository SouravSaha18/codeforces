#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define   ll            long long int
#define   db            double
#define   ch            char
#define   st            string
#define   lp1(i,a,n)    for(i=a;i<n;i++)
#define   lp2(i,n,a)    for(i=n-1;i>=a;i--)
#define   wl            while
#define   PI            3.14159265359
#define   pb            push_back
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   up            upper_bound(a,a+n,b[i])-a;
#define   Y             cout<<"YES"<<endl;
#define   N             cout<<"NO"<<endl;
#define   on            cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll c,d,e,f,a,b,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,cc=0;
st r,s,u,v,w;
ll ar[950002],br[950002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
set<st>se,sa;
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    {
        wl(t--)
        {
            cin>>a>>b>>k;
            pair<ll,ll>pp[k+5];
            vector<ll>v1(a+5,0),v2(b+5,0);
            lp1(i,0,k)
            {
                cin>>ar[i];
                v1[ar[i]]++;
            }
            lp1(i,0,k)
            {
                cin>>br[i];
                v2[br[i]]++;
            }
            lp1(i,0,k)
                pp[i]={ar[i],br[i]};
            sort(pp,pp+k);
            vector<ll>aa(a+5,0),bb(b+5,0);
            c=x=y=z=0;
            lp1(i,0,k)
            {
                if(aa[pp[i].first]==0)
                {
                    j=i;
                    wl(pp[j].first==pp[i].first)
                    {
                        aa[pp[j].first]++;
                        bb[pp[j].second]++;
                        j++;
                        x++;
                    }
                }
                y=v2[pp[i].second]-bb[pp[i].second];
                z=max(0LL,k-x-y);
                c=c+z;
            }
            cout<<c<<endl;
        }
    }
}
