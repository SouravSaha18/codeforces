#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m,s=0,i,x;
        cin>>n>>m;;
        long int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        x=min(s,m);
        cout<<x<<endl;
    }

}
