#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,st>mp,mq;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>m;
    lp1
    {
        cin>>mp[i];
    }
    lp1
    {
        lp3
        {
            if(i%2 && j%2)
            {
                if(mp[i][j]=='.')
                    cout<<"B";
                else
                    cout<<mp[i][j];
            }
            else if(i%2 && j%2==0)
            {
                if(mp[i][j]=='.')
                    cout<<"W";
                else
                    cout<<mp[i][j];
            }
            else if(i%2==0 && j%2)
            {
                if(mp[i][j]=='.')
                    cout<<"W";
                else
                    cout<<mp[i][j];
            }
            else if(i%2==0 && j%2==0)
            {
                if(mp[i][j]=='.')
                    cout<<"B";
                else
                    cout<<mp[i][j];
            }
        }
        cout<<endl;
    }
}
