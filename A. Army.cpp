#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d[n+1],i,a,b,x=0;
    for(i=1;i<n;i++)
    {
        cin>>d[i];
    }
    cin>>a>>b;
    for(i=a;i<b;i++)
    {
        x=x+d[i];
    }
    cout<<x;
}
