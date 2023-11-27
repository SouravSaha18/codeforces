#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1],i,c=1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]-a[i-1]<=x)
            c++;
        else
            c=1;
    }
    cout<<c;
}
