#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],i,j,x=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        x=x+a[i];
    }
    x=x/(n/2);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                a[i]=0;
                a[j]=0;
                cout<<(i+1)<<' '<<(j+1)<<endl;
            }
        }
    }
}
