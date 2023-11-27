#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=0;i<n-1;i++)
#define    lp2    for(j=0;j<n;j++)
#define    wl     while(t--)
ll n,t,i,j,c,b,x=0;
int main()
{
    cin>>n;
    ch a[n+1];
    cin>>a;
    sort(a,a+n);
    lp1
    {
        c=1;
        if(a[i]==a[i+1])
            c++;
        if(c>1)
        {
            x=1;
            break;
        }
    }
    if(x==1 || n==1)
        cout<<"Yes";
    else
        cout<<"No";
}
