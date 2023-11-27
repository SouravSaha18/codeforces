#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    d     double
#define    ch    char
#define    st    string
#define    lp    for(i=1;i<=n;i++)
#define    w     while(t--)
int main()
{
    ll n,t,i,c=0,x;
    cin>>n>>t;
    ll a;
    lp
    {
        cin>>a;
        a=86400-a;
        c+=a;
        if(c>=t)
            break;
    }
    cout<<i;
}
