#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define   ll            long long int
ll c,d,e,b,f,g,h,i,j,k,l,m,n,o,p,q,t,x,y,z;
ll a[950002];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=b=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                c=c-a[i];
            else
                b=b+a[i];
        }
        sort(a,a+n);
        if(b!=c)
        {
            cout<<"YES"<<endl;
            if(b>c)
                reverse(a,a+n);
            for(i=0;i<n;i++)
                cout<<a[i]<<' ';
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
