#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long int a[n+1],b[n+1],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
