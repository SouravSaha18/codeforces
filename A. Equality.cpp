#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,k,x[30]={0},i,c=0,p;
    ch a[100010];
    cin>>n>>k>>a;
    for(i=0;i<n;i++)
    {
        x[a[i]-'A']++;
    }
    p=x[0];
    for(i=1;i<k;i++)
    {
        if(x[i]<p)
            p=x[i];
    }
    cout<<(p*k);
}
