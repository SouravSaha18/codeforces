#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>s;
        n=s.size();
        map<pair<ll,ll>,ll>mp;
        x=0,y=0,c=0;
        lp1
        {
            p=x,q=y;
            if(s[i]=='N')
                p--;
            else if(s[i]=='S')
                p++;
            else if(s[i]=='W')
                q--;
            else
                q++;
            if(mp[{x+p,y+q}])
                c++;
            else
            {
                c=c+5;
                mp[{x+p,y+q}]=1;
            }
            x=p,y=q;
        }
        cout<<c<<endl;
    }
}
