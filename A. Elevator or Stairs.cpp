#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll x,y,z,a,b,c,n,m;
    cin>>x>>y>>z>>a>>b>>c;
    n=(abs(x-y))*a;
    m=((abs(x-z)+abs(x-y))*b)+(3*c);
    if(n<m)
        cout<<"NO";
    else
        cout<<"YES";
}
