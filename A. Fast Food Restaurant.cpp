#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=x;i++)
#define    lp2   for(j=0;j<n-1;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c=0,x,y,z;
int main()
{
    cin>>t;
    wl
    {
        c=0;
        cin>>x>>y>>z;
        if(x<y)
            swap(x,y);
        if(x<z)
            swap(x,z);
        if(y<z)
            swap(y,z);
        if(x)
            x--,c++;
        if(y)
            y--,c++;
        if(z)
            z--,c++;
        if(x && y)
            x--,y--,c++;
        if(x && z)
            x--,z--,c++;
        if(y && z)
            y--,z--,c++;
        if(x && y && z)
            c++;
        cout<<c<<endl;
    }
}
