#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
//#define    lp2   for(i=m-1;i>=0;i--)
#define    lp2   for(j=i+1;j<n;j++)
#define    lp3   for(k=j+1;k<n;k++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>s;
    n=s.size();
    lp1
    {
        x=(s[i]-'0');
        if(x%8==0)
        {
            yes
            cout<<x;
            haha
        }
        lp2
        {
            x=(s[i]-'0')*10+(s[j]-'0');
            if(x%8==0)
            {
                yes
                cout<<x;
                haha
            }
            lp3
            {
                x=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(x%8==0)
                {
                    yes
                    cout<<x;
                    haha
                }
            }
        }
    }
    no
}
