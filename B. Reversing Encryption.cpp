#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    do    double
#define    ch    char
#define    st    string
#define    lp1    for(i=1;i<=n;i++)
#define    lp2    for(j=0;j<n;j++)
#define    w     while(t--)
int main()
{
    ll n,i,j;
    cin>>n;
    ch a[n+1];
    cin>>a;
    lp1
        if(n%i==0)
            reverse(a,a+i);
    lp2
        cout<<a[j];
}
