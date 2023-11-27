#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,h,m,t,i,j,b=0,c=1,x,y,z,d,a[305]={0};
int main()
{
    cin>>m>>n;
    lp1
    {
        cin>>h;
        x=h%m;
        a[x]++;
        if(a[x]==2)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
}
