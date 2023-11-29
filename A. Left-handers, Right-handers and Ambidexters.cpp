#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=1;i<=n;i++)
#define    lp2    for(j=0;j<n;j++)
#define    w     while(t--)
ll n,t,i,j,c=0,a,b;
int main()
{
    cin>>a>>b>>n;
    t=abs(a-b);
    if(n<t)
        j=2*(min(a,b)+n);
    else
        j=((a+b+n)/2*2);
    cout<<j;
}
