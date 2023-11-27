#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=1;j<=300;j++)
#define    lp3   for(;j<=300;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c=0,x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n>>m;
        ll a,b[305]={0};
        lp1
        {
            cin>>a;
            b[a]++;
        }
        c=0;
        lp2
        {
            if(b[j]==0)
                c++;
            if(c==m)
            {
                lp3
                    if(b[j+1]==0)
                        break;
                break;
            }
        }
        cout<<j<<endl;
    }
}
