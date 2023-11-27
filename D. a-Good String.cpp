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
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[250002],b[250002];
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    cin>>t;
    wl(t--)
    {
        cin>>n>>s;
        ch ca='a';
        aa=0;
        wl(1)
        {
            if(n==1)
            {
                if(s[0]!=ca)
                   aa++;
                break;
            }
            u="";
            v="";
            cc=bb=0;
            map<ch,ll>mp,mq;
            lp1(i,0,n/2)
            {
                if(s[i]==ca)
                    cc++;
                u=u+s[i];
                mp[s[i]]++;
            }
            lp1(i,n/2,n)
            {
                if(s[i]==ca)
                    bb++;
                v=v+s[i];
                mq[s[i]]++;
            }
            n=n/2;
            ca++;
            if(cc>bb)
            {
                aa=aa+(n-cc);
                s=v;
            }
            else if(cc<bb)
            {
                aa=aa+(n-bb);
                s=u;
            }
            else
            {
                c=0;
                lp1(i,ca,'z'+1)
                {
                    //cout<<mp[s[i]]<<' '<<mq[s[i]]<<endl;
                    if(mp[i]<mq[i])
                    {
                        c=1;
                        s=v;
                        aa=aa+(n-bb);
                        break;
                    }
                    else if(mp[i]>mq[i])
                    {
                        c=1;
                        s=u;
                        aa=aa+(n-cc);
                        break;
                    }
                }
                if(!c)
                {
                    //cout<<1<<endl;
                    s=v;
                    aa=aa+(n-cc);
                }
            }
            //cout<<aa<<' '<<ca<<' '<<bb<<' '<<cc<<' '<<s<<' '<<n<<endl;
        }
        cout<<aa<<endl;
    }
}
