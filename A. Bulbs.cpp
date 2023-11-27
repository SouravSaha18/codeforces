#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,a[101],b[101]={0},i,j,x,y;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        for(j=0;j<x;j++)
        {
            cin>>a[i];
            b[a[i]]=1;
        }
    }
    y=1;
    for(i=1;i<=m;i++)
    {
        if(b[i]==0)
        {
            y=0;
            break;
        }
    }
    if(y==1)
        cout<<"YES";
    else
        cout<<"NO";
}
