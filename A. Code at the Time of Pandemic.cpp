#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=t;i++)
#define    lp2   for(j=1;j<=n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c;
ll x,y,z;
int main()
{
    cin>>t;
    lp1
    {
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        lp2
        {
            if(j==1)
                cout<<"Day = 1, New = 0, Total = 1"<<endl;
            else if(j==2)
            {
                x=2;
                y=3;
                cout<<"Day = "<<j<<", New = "<<x<<", Total = "<<y<<endl;
            }
            else
            {
                x=x*3;
                y=y*3;
                cout<<"Day = "<<j<<", New = "<<x<<", Total = "<<y<<endl;
            }
        }
    }
}
