#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=9;j>=0;j--)
#define    lp3   for(j=0;j<10;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r="0000000000";
map<ll,ll>mp;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>n>>s;
    lp1
    {
        if(s[i]=='L')
        {
            lp3
            {
                if(r[j]=='0')
                {
                    r[j]='1';
                    break;
                }
            }
        }
        else if(s[i]=='R')
        {
            lp2
            {
                if(r[j]=='0')
                {
                    r[j]='1';
                    break;
                }
            }
        }
        else
            r[s[i]-'0']='0';
    }
    lp3
        cout<<r[j];
}
