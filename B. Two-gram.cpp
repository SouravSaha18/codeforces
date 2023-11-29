#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i,j,c,x=0;
    cin>>n;
    ch a[n+1],y,z;
    cin>>a;
    for(i=0;i<n-1;i++)
    {
        c=1;
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j] && a[i+1]==a[j+1])
                c++;
        }
        if(c>x)
        {
            x=c;
            y=a[i];
            z=a[i+1];
        }
    }
    cout<<y<<z;
}
