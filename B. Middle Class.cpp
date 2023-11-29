#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n>>y;
        c=0;
        x=0;
        z=0;
        ll a[n+1];
        lp1
            cin>>a[i];
        sort(a,a+n);
        reverse(a,a+n);
        lp1
        {
            c=c+a[i];
            if((c/(i+1)<y))
            {
                z=1;
                break;
            }
            else
                x++;
        }
        cout<<x<<endl;
    }
}
