#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=30;i>=0;i--)
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    cin>>n;
    ll a[n+1];
    x=0;
    lp1
        cin>>a[i];
    lp2
    {
        c=0;
        lp3
        {
            if((a[j]>>i) & 1)
            {
                c++;
                x=j;
            }
        }
        if(c==1)
            break;
    }
    swap(a[0],a[x]);
    lp1
        cout<<a[i]<<' ';
    cout<<endl;
}
