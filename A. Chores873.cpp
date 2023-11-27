#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<x;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no   cout<<"NO"<<endl;
ll n,h,m,t,i,j,b=0,c=0,x,y,z,d;
int main()
{
    cin>>n>>x>>y;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        c=c+a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    lp2
        b=b+a[j];
    d=(c-b)+(x*y);
    cout<<d;
}
