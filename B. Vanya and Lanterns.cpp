#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=0;i<n-1;i++)
#define    lp3   for(j=1;j<=m;j++)
#define    wl    while(t--)
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no   cout<<"NO"<<endl;
ll n,h,m,t,c=0,i,j,b;
db d,x,y,z;
int main()
{
    cin>>n>>m;
    ll a[n+1];
    lp1
        cin>>a[i];
    srt
    x=a[0];
    y=m-a[n-1];
    lp2
        c=max(c,(a[i+1]-a[i]));
    z=db(c)/2;
    d=max(z,max(x,y));
    cout<<fixed<<setprecision(10)<<d;
}
