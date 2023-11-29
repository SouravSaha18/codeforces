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
ll c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll mn=8675435789,mx=8675868757,md=1000000007,aa=0,bb=0,cc=0;
st r,s,u,v,w;
ll a[950002],b[950002];
map<ll,ll>mp,mq;
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
    ll mat[102][102];
    cin>>n>>m;
    lp1(i,0,n)
    {
       lp1(j,0,m)
            cin>>mat[i][j];
    }
    c=0;
    lp1(i,0,n/2)
    {
        lp1(j,0,m/2)
        {
          ll mid=(mat[i][j]+mat[n-i-1][j]+mat[i][m-j-1]+mat[n-i-1][m-j-1])/4;
          mn=mx;
          mn=min(mn,abs(mat[i][j]-mat[i][j])+abs(mat[n-i-1][j]-mat[i][j])+abs(mat[i][m-j-1]-mat[i][j])+abs(mat[n-i-1][m-j-1]-mat[i][j]));
          mn=min(mn,abs(mat[i][j]-mat[n-i-1][j])+abs(mat[n-i-1][j]-mat[n-i-1][j])+abs(mat[i][m-j-1]-mat[n-i-1][j])+abs(mat[n-i-1][m-j-1]-mat[n-i-1][j]));
         mn=min(mn,abs(mat[i][j]-mat[i][m-j-1])+abs(mat[n-i-1][j]-mat[i][m-j-1])+abs(mat[i][m-j-1]-mat[i][m-j-1])+abs(mat[n-i-1][m-j-1]-mat[i][m-j-1]));
        mn=min(mn,abs(mat[i][j]-mat[n-i-1][m-j-1])+abs(mat[n-i-1][j]-mat[n-i-1][m-j-1])+abs(mat[i][m-j-1]-mat[n-i-1][m-j-1])+abs(mat[n-i-1][m-j-1]-mat[n-i-1][m-j-1]));
        mn=min(mn,abs(mat[i][j]-mid)+abs(mat[n-i-1][j]-mid)+abs(mat[i][m-j-1]-mid)+abs(mat[n-i-1][m-j-1]-mid));
        mid++;
        mn=min(mn,abs(mat[i][j]-mid)+abs(mat[n-i-1][j]-mid)+abs(mat[i][m-j-1]-mid)+abs(mat[n-i-1][m-j-1]-mid));
        c+=mn;
        }
    }
    if(n%2)
    {
        lp1(j,0,m/2)
        {
            ll mid=(mat[n/2][j]+mat[n/2][m-j-1])/2;
            c+=abs(mid-mat[n/2][j])+abs(mid-mat[n/2][m-j-1]);
        }
    }
    if(m%2)
    {
        lp1(j,0,n/2)
        {
            ll mid=(mat[j][m/2]+mat[n-j-1][m/2])/2;
            c+=abs(mid-mat[j][m/2])+abs(mid-mat[n-j-1][m/2]);
        }
    }
   cout<<c<<endl;
        }

}

