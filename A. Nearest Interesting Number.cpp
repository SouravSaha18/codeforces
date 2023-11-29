#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
ll sum(ll n)
{
    ll c=0;
    while(n>0)
    {
        c=c+(n%10);
        n=n/10;
    }
    return c;
}
int main()
{
    ll n;
    cin>>n;
    while(sum(n)%4!=0)
        n++;
    cout<<n;
}
