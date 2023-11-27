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
ll c=0,d=0,e=0,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=-8675868757,PI=3.14159265359,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[250002],b[250002];
map<ll,ll>mp,mq;
queue<ll>qu,qe;
pair<ll,ll>pp[30030];
set<st>se,sa;
int main()
{
    fast
    cin>>n>>s;
    lp1(i,0,n)
    {
        if(s[i]=='0')
            aa++;
        if(s[i]=='1')
            bb++;
        if(s[i]=='2')
            cc++;
    }
    p=n/3;
    lp1(i,0,n)
    {
        if(s[i]=='0')
        {
            c++;
            if(c<=p)
                cout<<s[i];
            else
            {
                if(bb<p)
                {
                    cout<<"1";
                    bb++;
                }
                else
                {
                    cout<<"2";
                    cc++;
                }
                aa--;
            }
        }
        if(s[i]=='1')
        {
            e++;
            if(bb<=p)
                cout<<s[i];
            else
            {
                if(e<=p && aa>=p)
                    cout<<s[i];
                else if(aa<p)
                {
                    cout<<"0";
                    aa++;
                    c++;
                    bb--;
                    e--;
                }
                else
                {
                    cout<<"2";
                    cc++;
                    bb--;
                    e--;
                }
            }
        }
        if(s[i]=='2')
        {
            if(cc<=p)
                cout<<s[i];
            else
            {
                if(aa<p)
                {
                    cout<<"0";
                    aa++;
                    c++;
                }
                else
                {
                    cout<<"1";
                    bb++;
                    e++;
                }
                cc--;
            }
        }
    }
}
