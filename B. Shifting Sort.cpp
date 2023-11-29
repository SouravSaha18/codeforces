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
#define   all(a)        a.begin(),a.end()
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   up(a,n,val)   upper_bound(a,a+n,val)-a;
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
st r,s,u,v,w;
ll a[950002],b[950002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
stack<ll>sc,sk;
pair<ll,ll>pp[30030];
set<st>se,sa;
set<int>::iterator se1;
int main()
{
    fast
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    cin>>t;
    wl(t--)
    {
        cin>>n;
        lp1(i,0,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        cc=0;
        j=0;
        vector<ll>v;
        lp1(p,0,n)
        {
            lp1(i,j,n)
            {
                if(b[i]==a[j])
                {
                    if(i!=j)
                    {
                        v.pb(j+1);
                        v.pb(i+1);
                        v.pb(i-j);
                        cc++;
                    }
                    //cout<<j+1<<" "<<i+1<<" "<<i-j<<endl;
                    x=a[j];
                    lp1(k,j,i+1)
                        swap(x,b[k]);
                    j++;
                }
            }
        }
        cout<<cc<<endl;
        lp1(i,0,v.size())
        {
            cout<<v[i]<<" ";
            i++;
            cout<<v[i]<<" ";
            i++;
            cout<<v[i]<<endl;
        }
    }
}
