#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n,d,c=0;
        cin>>n>>d;
        int a[n],i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]*i<=d)
            {
                c=c+a[i];
                d=d-a[i]*i;
            }
            else
            {
                c=c+d/i;
                d=0;
            }
        }
        cout<<c<<endl;
    }
}
