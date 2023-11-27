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
ll n,m,t,i,j,c,x=0,y=0,z;
int main()
{
    cin>>n;
    ll a[n+1],b[n+1];
    lp1
        cin>>a[i];
    lp1
        cin>>b[i];
    lp1
    {
        if(a[i]==1 &&  b[i]==0)
            x++;
        if(a[i]==0 && b[i]==1)
            y++;
    }
    if(x==0)
        cout<<"-1";
    else
        cout<<((y/x)+1);
}
