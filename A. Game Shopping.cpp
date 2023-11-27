#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,i,j,c=0;
    cin>>n>>m;
    ll a[1010],b[1010];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=b[j])
        {
            c++;
            j++;
        }
    }
    cout<<c;
}
