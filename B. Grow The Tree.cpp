#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=0;i<n/2;i++)
#define    lp2    for(j=0;j<n;j++)
#define    lp3    for(j=n/2;j<n;j++)
#define    wl     while(t--)
ll n,t,i,j,c=0,b=0;
int main()
{
    cin>>n;
    ll a[n+1];
    lp2
        cin>>a[j];
    sort(a,a+n);
    lp1
        b=b+a[i];
    lp3
        c=c+a[j];
    cout<<((b*b)+(c*c));
}
