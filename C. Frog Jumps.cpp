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
#define    lp3   for(j=0;j<s.size();j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c,x,y,z;
st s,r,p,q;
map<st,ll>mp;
int main()
{
    cin>>n;
    lp1
    {
        cin>>s;
        c=0;
        x=0;
        lp3
        {
            if(s[j]=='R')
                c=0;
            else
                c++;
            x=max(x,c);
        }
        cout<<(x+1)<<endl;
    }
}
