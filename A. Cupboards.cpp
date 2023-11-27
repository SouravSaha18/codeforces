#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,h,m,t,s,i,j,a=0,b=0,c=123456789065,x=0,y=0,z,d;
int main()
{
    cin>>t;
    wl
    {
        cin>>n>>m;
        if(n==0)
            a++;
        else
            b++;
        if(m==0)
            x++;
        else
            y++;
    }
    z=min(a,b)+min(x,y);
    cout<<z;
}
