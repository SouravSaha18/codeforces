#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll a,b,x,c=0,n,i;
    cin>>a>>b;
    x=abs(a-b);
    n=x/2;
    for(i=1;i<=n;i++)
    {
        c=c+(2*i);
    }
    if(x%2==0)
        cout<<c;
    else
        cout<<(c+n+1);
}
