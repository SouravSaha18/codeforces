#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    d     double
#define    ch    char
#define    st    string
#define    lp    for(i=0;i<n-1;i++)
#define    w     while(t--)
int main()
{
    ll n;
    cin>>n;
    if(n%2==0 && n%4!=0)
        cout<<((n/2)-2)<<' '<<((n/2)+2);
    else
        cout<<(((n+1)/2)-1)<<' '<<(n-((n+1)/2)+1);
}
