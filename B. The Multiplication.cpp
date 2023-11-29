#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;;i++)
#define    lp2   for(j=1;j<=n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    cin>>n;
    lp2
    {
        x=1;
        cin>>k>>m;
        cout<<"Case "<<j<<": ";
        lp1
        {
            if((i*k)>m)
                break;
            x=x*(1+(i*k));
        }
        c=(10*10*10*10*10*10*10*10*10)+7;
        cout<<(x%c)<<endl;
    }
}
