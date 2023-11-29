#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=m-1;i>=0;i--)
#define    lp2   for(i=0;i<n;i++)
#define    lp3   for(j=0;j<n;j++)
#define    lp4   for(x=0;x<n;x++)
#define    lp5   for(y=0;y<n;y++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y;
db z;
int main()
{
    cin>>n;
    ll a[n+1][n+1];
    lp2
    {
        lp3
        {
            cin>>a[i][j];
        }
    }
    lp2
    {
        lp3
        {
            if(a[i][j]!=1)
            {
                c=0;
                lp4
                {
                    lp5
                    {
                        if(a[i][j]==a[i][y]+a[x][j])
                            c=1;
                    }
                }
                if(c==0)
                {
                    no
                    return 0;
                }
            }
        }
    }
    yes
}
