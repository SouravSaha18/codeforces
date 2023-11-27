#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,k,t;
    cin>>n>>k>>t;
    if(t<=k)
        cout<<t;
    else if(t>n)
        cout<<(n+k-t);
    else
        cout<<k;
}
