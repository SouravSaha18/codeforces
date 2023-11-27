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
st r,s,u,v,w;
ll a[950002],b[950002];
map<ll,ll>mp,mq;
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
        cc=0;
        lp1(i,0,n)
        {
            cin>>a[i];
            if(i%2)
                x=-a[i];
            else
                x=a[i];
            cc=cc+x;
            b[i]=cc;
        }
        if(n%2)
        {
            on
            continue;
        }
        if(!cc)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else
        {
            bb=0;
            lp1(i,0,n)
            {
                p=b[i];
                q=b[n-1]-b[i];
                if(i%2==0)
                    q=-q;
                //cout<<p<<" "<<q<<endl;
                if(p+q==0)
                {
                    p=i+1;
                    bb=1;
                    break;
                }
            }
            if(bb)
            {
                cout<<2<<endl;
                cout<<1<<" "<<p<<endl;
                cout<<p+1<<" "<<n<<endl;
            }
            else
            {
                cout<<3<<endl;
                cout<<1<<" "<<1<<endl;
                cout<<2<<" "<<n-1<<endl;
                cout<<n<<" "<<n<<endl;
            }
        }

    }
}


