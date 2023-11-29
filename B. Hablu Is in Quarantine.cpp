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
#define    lp3   for(j=0;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y;
int main()
{
    cin>>n;
    st a[n+1];
    ch b[(n*n)+1];
    lp2
        cin>>a[i];
    c=0;
    lp2
    {
        lp3
        {
            b[c]=a[i][j];
            c++;
        }
    }
    cin>>m;
    y=0;
    lp1
    {
        cin>>x;
        if(b[x-1]=='c' && y==0)
        {
            y=1;
            yes
            x=0;
        }
        if(y==1 && x)
            cout<<x<<' ';
    }
    if(y==0)
        no
}
