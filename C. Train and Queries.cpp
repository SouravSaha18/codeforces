#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define   ll            long long int
#define   db            double
#define   ch            char
#define   st            string
#define   lp1(i,a,n)    for(i=a;i<n;i++)
#define   lp2(i,n,a)    for(i=n;i>=a;i--)
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
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002];

queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    wl(t--)
    {
        map<ll,ll>mp,mq,mr;
        cin>>n>>k;
        lp1(i,0,n)
        {
            cin>>a[i];
            if(!mp[a[i]])
                mq[a[i]]=i+1;
            mp[a[i]]++;
        }
        lp2(i,n-1,0)
        {
            if(!mr[a[i]])
                mr[a[i]]=i+1;
        }
        wl(k--)
        {
            cin>>x>>y;
            if(!mp[x] ||  !mp[y])
                N
            else
            {
                //cout<<mq[x]<<" "<<mq[y]<<" "<<mr[x]<<" "<<mr[y];
                if(mq[x]<mq[y] || mr[x]<mr[y] || mq[x]<mr[y] || mr[x]<mq[y])
                    Y
                else
                    N
            }
        }
    }

}