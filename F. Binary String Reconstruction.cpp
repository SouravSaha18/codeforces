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
ll n,m,t,i,j,k,mn=8675435789,mx=-8675868757,c=0,d,c1,x,y,z,p,q;
st s,r;
map<ll,ll>mp,mq;
pair<ll,ll>pp[30030];
set<st>se;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>x>>p>>y;
        if(p==0)
        {
            if(x==0)
            {
                y++;
                while(y--)
                    cout<<"1";
            }
            else if(y==0)
            {
                x++;
                while(x--)
                    cout<<"0";
            }
        }
        else if(p==1)
        {
            y++;
            while(y--)
                cout<<"1";
            x++;
            while(x--)
                cout<<"0";
        }
        else
        {
            c=0;
            if(x && y)
            {
                y++;
                while(y--)
                    cout<<"1";
                x++;
                while(x--)
                    cout<<"0";
                p--;
                while(p--)
                {
                    c++;
                    cout<<(c%2);
                }
            }
            else if(!x && !y)
            {
                p++;
                while(p--)
                {
                    c++;
                    cout<<(c%2);
                }
            }
            else if(!x && y)
            {
                y++;
                while(y--)
                    cout<<"1";
                c++;
                while(p--)
                {
                    c++;
                    cout<<(c%2);
                }
            }
            else if(x && !y)
            {
                x++;
                while(x--)
                    cout<<"0";
                while(p--)
                {
                    c++;
                    cout<<(c%2);
                }
            }
        }
        cout<<endl;
    }
}
