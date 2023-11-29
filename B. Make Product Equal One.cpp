#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i;
    cin>>n;
    ll a[n+1],c=0,neg=0,z=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            neg++;
            c=c+(abs(a[i]+1));
        }
        else if(a[i]==0)
        {
            z++;
            c=c+1;
        }
        else if(a[i]==1)
            c=c;
        else
            c=c+a[i]-1;
    }
    if(neg%2==0)
        cout<<c;
    else
    {
        if(z>0)
            cout<<c;
        else
            cout<<(c+2);
    }
}
