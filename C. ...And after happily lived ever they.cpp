#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(;;)
#define    lp2   for(j=1;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c=0,x=0,y=0,z,a=0,b=0,d=0;
int main()
{
    cin>>n;
    if(n>=32)
    {
        a=1;
        n=n-32;
    }
    if(n>=16)
    {
        b=1;
        n=n-16;
    }
    if(n>=8)
    {
        c=1;
        n=n-8;
    }
    if(n>=4)
    {
        d=1;
        n=n-4;
    }
    if(n>=2)
    {
        x=1;
        n=n-2;
    }
    if(n>=1)
    {
        y=1;
        n=n-1;
    }
    n=(a*32)+(b*1)+(c*4)+(d*8)+(x*2)+(y*16);
    cout<<n;
}
