#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    do    double
#define    ch    char
#define    st    string
#define    lp    for(i=0;i<n;i++)
#define    w     while(t--)
int main()
{
    ll n,m,i,c=0,a;
    cin>>n>>m;
    lp
    {
        cin>>a;
        c=c+a;
        cout<<(c/m)<<' ';
        c=c%m;
    }
}
