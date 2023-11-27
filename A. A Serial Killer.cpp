#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=1;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c=2;
st x,y,z;
int main()
{
   st a,b;
   cin>>a>>b;
   cin>>t;
   cout<<a<<' '<<b<<endl;;
   wl
   {
       cin>>x>>y;
       if(x==a)
            a=y;
       else
            b=y;
       cout<<a<<' '<<b<<endl;
   }
}
