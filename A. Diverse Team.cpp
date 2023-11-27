#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k,m,a[101]={0},b[101],i,c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(a[m]==0)
        {
            b[c++]=m;
            a[m]=i+1;
        }
    }
    if(c<k)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<k;i++)
            cout<<a[b[i]]<<' ';
    }
}
