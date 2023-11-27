#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i;
    cin>>n;
    ll a[n+1],c=0,x,j,m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c=c+a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    m=a[0];
    for(i=m; ;i++)
    {
        x=0;
        for(j=0;j<n;j++)
            x=x+(i-a[j]);
        if(x>c)
        {
            cout<<i;
            break;
        }
    }
}
