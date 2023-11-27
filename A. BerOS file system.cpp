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
#define    lp3   for(j=i+1;j<n;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,d,c1,x=0,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    cin>>s;
    n=s.size();
    lp1
    {
        if(n==1 && s[i]=='/')
        {
            cout<<s[i];
            haha
        }
        else if(s[i]=='/' && i!=n-1 && c==0)
        {
            z=0;
            lp3
            {
                if(s[j]>='a' && s[j]<='z')
                    z=1;
            }
            if(z)
            {
                c=1;
                cout<<s[i];
            }
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            c=0;
            cout<<s[i];
            x=1;
        }
    }
    if(!x)
        cout<<"/";
}
