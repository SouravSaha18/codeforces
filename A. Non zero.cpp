#include <bits/stdc++.h>
using namespace std;
int main()
{
    long  long a,n,m,i,w,t,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=m=w=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a==0)
                w++;
            s=s+a;
        }
        s=s+w;
        m=w;
        if(s==0)
            m++;
        cout<<m<<endl;
    }
}

