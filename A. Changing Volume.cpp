#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,n,x,y;
        cin>>a>>b;
        n=abs(a-b);
        c=n%5;
        x=n/5;
        y=((c/2)+(c%2));
        cout<<(x+y)<<endl;
    }
}
