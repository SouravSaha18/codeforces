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
#define   wl(t)         while(t--)
#define   pb            push_back
#define   srt(a,n)      sort(a,a+n);
#define   rvs(a,n)      reverse(a,a+n);
#define   Y             cout<<"YES"<<endl;
#define   N             cout<<"NO"<<endl;
#define   O             cout<<"-1"<<endl;
#define   haha          return 0;
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a*b)/gcd(a,b)
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,x,y,z;
ll mn=8675435789,mx=-8675868757,aa=0,bb=0,cc=0;
st r,s,u,v,w,t;
ll a[250002],b[250002];
map<ll,ll>mp,mq;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>k;
    wl(k)
    {
      set<ll>pp,pq,pr;
      set<ll>::iterator it,tt,ttt;
      cin>>s;
      aa=0,bb=0,cc=0;
      mn=8675435789;
      l=s.size();
      lp1(i,0,l)
      {
          if(s[i]=='1')
            {
                pp.insert(i+1);
                aa=1;
            }
          else if(s[i]=='2')
            {
                pq.insert(i+1);
                bb=1;
            }
          else
            {
                pr.insert(i+1);
                cc=1;
            }
      }
      if(aa==0 || bb==0 || cc==0)
        {
            cout<<"0"<<endl;
            continue;
        }
     for(it=pp.begin();it!=pp.end();it++)
     {
         tt=pq.lower_bound(*it);
         p=*tt;
         ttt=pr.lower_bound(*it);
         q=*ttt;
         if(p>q)
            swap(p,q);
         mn=min(mn,q-*it);
     }

    for(it=pq.begin();it!=pq.end();it++)
     {
         tt=pp.lower_bound(*it);
         p=*tt;
         ttt=pr.lower_bound(*it);
         q=*ttt;
         if(p>q)
            swap(p,q);
         mn=min(mn,q-*it);
     }

        for(it=pr.begin();it!=pr.end();it++)
     {
         tt=pq.lower_bound(*it);
         p=*tt;
         ttt=pp.lower_bound(*it);
         q=*ttt;
         if(p>q)
            swap(p,q);
         mn=min(mn,q-*it);
     }
     cout<<mn+1<<endl;
    }
}
