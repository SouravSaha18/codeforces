#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n+1],i,x,m,p;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    m=a[0];
    reverse(a,a+n);
    p=a[0];
    x=p-m-n+1;
    cout<<x;
}
