#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=2;i*i<x;i++)
#define    lp2   for(i=0;i<n;i++)
#define    lp3   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0;
ll x,y,z;
int main()
{
    cin>>n;
    ll a[n+1];
    lp2
        cin>>a[i];
    sort(a,a+n);
    lp3
    {
        if(a[j]!=a[j+1])
            c++;
    }
    if(c==0)
        cout<<"0";
    else if(c>2)
        cout<<"-1";
    else if(c==1)
    {
        k=(a[n-1]-a[0]);
        if(k%2==0)
            cout<<(k/2);
        else
             cout<<k;
    }
    else
    {
        lp3
        {
            if(a[j]!=a[j+1])
            {
                x=a[j+1];
                break;
            }
        }
        y=a[n-1]-a[j+1];
        z=a[j+1]-a[0];
        if(y==z)
            cout<<y;
        else
            cout<<"-1";
    }
    //cout<<' '<<c<<' '<<x<<' '<<y<<' '<<z;
}
