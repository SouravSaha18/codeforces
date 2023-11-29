#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(j=x;j<=n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no   cout<<"NO"<<endl;
ll n,h,m,t,i,j,b=0,c=0,x,y,z,d,a[110]={0};
int main()
{
    cin>>n>>m;
    lp1
    {
        cin>>x;
        lp2
        {
            if(a[j]!=0)
                break;
            a[j]=x;
        }
    }
    lp1
        cout<<a[i]<<' ';
}
