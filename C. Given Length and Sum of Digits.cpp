#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c,s;
ll x,y,z;
int main()
{
    cin>>m>>s;
    if((s<1 && m >1) || s>m*9)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    for(i=m-1,c=s;i>=0;i--)
    {
        z=0;
        x=max(z,(c-(9*i)));
        if(x==0 && i==m-1 && c)
            x=1;
        cout<<x;
        c=c-x;
    }
    cout<<' ';
    for(i=m,c=s;i>0;i--)
    {
        y=9;
        x=min(y,c);
        cout<<x;
        c=c-x;
    }
}
