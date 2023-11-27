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
ll n,m,t,i,j,c=0,x;
int main()
{
    cin>>n;
    ll a[n+1],b[n+1];
    lp1
    {
        cin>>a[i];
        c=c+a[i];
    }
    lp1
        cin>>b[i];
    sort(b,b+n);
    x=b[n-1]+b[n-2];
    if(c<=x)
        yes
    else
        no
}
