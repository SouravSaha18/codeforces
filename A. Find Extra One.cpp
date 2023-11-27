#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=1;i<=n;i++)
#define    lp2    for(j=1;j<=m;j++)
#define    wl     while(t--)
ll n,m,t,i,j,c=0,b,x=0;
int main()
{
    cin>>t;
    wl
    {
        cin>>b>>m;
        if(b>0)
            c++;
        else
            x++;
    }
    if(c<=1 || x<=1)
        cout<<"Yes";
    else
        cout<<"No";
}
