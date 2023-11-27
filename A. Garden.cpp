#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+k],i,x,y;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(i=0;i<n;i++)
    {
        x=k%a[i];
        y=k/a[i];
        if(x==0)
        {
            cout<<y;
            break;
        }
    }
}
