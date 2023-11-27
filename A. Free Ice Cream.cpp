#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n+1],i,c=0,x;
    char p;
    for(i=0;i<n;i++)
    {
        cin>>p>>a[i];
        if(p=='+')
            m=m+a[i];
        else
        {
            x=m-a[i];
            if(x<0)
            {
                c++;
            }
            else
                m=m-a[i];
        }
    }
    cout<<m<<' '<<c;
}
