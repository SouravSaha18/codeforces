#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<m;i++)
#define    lp2   for(i=0;i<n;i++)
#define    lp3   for(j=i+1;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0;
ll x,y;
int main()
{
    fast;
    cin>>n>>m;
    ll a[n+1];
    lp2
    {
        cin>>a[i];
    }
    sort(a,a+n);
    lp2
    {
        lp3
        {
            if(a[i]+a[j]<m)
                c++;
            else
                break;
        }
    }
    cout<<c;
}
