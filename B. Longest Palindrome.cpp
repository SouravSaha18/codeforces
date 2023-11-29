#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=30;i>=0;i--)
#define    lp3   for(j=0;j<11;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c,x,y,z;
st s,r,p,q;
set<st>u;
int main()
{
    cin>>n>>m;
    lp1
    {
        cin>>s;
        r=s;
        u.insert(s);
        reverse(r.begin(),r.end());
        y=u.count(r);
        //cout<<y<<endl;
        if(r==s)
        {
            p=s;
            //cout<<p<<"1"<<endl;
        }
        else if(y)
        {
            q=q+r;
            //cout<<q<<endl;
        }
    }
    s=q;
    reverse(q.begin(),q.end());
    q=q+p+s;
    cout<<q.size()<<endl<<q;
}
