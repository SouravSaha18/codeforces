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
#define   subbef(n)     substr(0,n);
#define   subaft(n)     substr(n+1);
#define   subpos(p,n)   subbef(p,n);
#define   on            cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r[1010],s[1010],u[1010],v,w;
ll a[950002],b[950002];

queue<ll>qu,qe;
stack<ll>sc,sk;
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
        cin>>n;
        map<st,ll>mp,mq,mr;
        lp1(i,0,n)
        {
            cin>>s[i];
            mp[s[i]]++;
        }
        lp1(i,0,n)
        {
            cin>>r[i];
            mq[r[i]]++;
        }
        lp1(i,0,n)
        {
            cin>>u[i];
            mr[u[i]]++;
        }
        //cout<<r[1]<<mp[s[0]]<<endl;
        aa=bb=cc=0;
        lp1(i,0,n)
        {
            if(mq[s[i]]==0 && mr[s[i]]==0)
                aa=aa+3;
            else if(mq[s[i]]==0 && mr[s[i]])
                aa=aa+1;
            else if(mq[s[i]]==1 && mr[s[i]]==0)
                aa=aa+1;
        }
        lp1(i,0,n)
        {
            if(mp[r[i]]==0 && mr[r[i]]==0)
                bb=bb+3;
            else if(mp[r[i]]==0 && mr[r[i]])
                bb=bb+1;
            else if(mp[r[i]]==1 && mr[r[i]]==0)
                bb=bb+1;
        }
        lp1(i,0,n)
        {
            if(mq[u[i]]==0 && mp[u[i]]==0)
                cc=cc+3;
            else if(mq[u[i]]==0 && mp[u[i]])
                cc=cc+1;
            else if(mq[u[i]]==1 && mp[u[i]]==0)
                cc=cc+1;
        }
        cout<<aa<<" "<<bb<<" "<<cc<<endl;
    }
}


