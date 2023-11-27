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
#define    lp3   for(j=1;j<=12;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,st>mp;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    mp[1]="January";
    mp[2]="February";
    mp[3]="March";
    mp[4]="April";
    mp[5]="May";
    mp[6]="June";
    mp[7]="July";
    mp[8]="August";
    mp[9]="September";
    mp[10]="October";
    mp[11]="November";
    mp[12]="December";
    cin>>s>>n;
    x=n%12;
    lp3
    {
        if(mp[j]==s)
        {
            y=j;
            break;
        }
    }
    k=x+y;
    if(k<13)
        cout<<mp[k];
    else
        cout<<mp[k-12];
}
