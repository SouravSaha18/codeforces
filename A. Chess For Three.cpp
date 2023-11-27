#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=x;j<=y;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,h,m,t,i,j,c=0,x=1,y=2,z=3,b1=0,b2=0;
int main()
{
    cin>>n;
    lp1
    {
        cin>>m;
        if(m==x)
            swap(y,z);
        else if(m==y)
            swap(x,z);
        else
        {
            no
            return 0;
        }
    }
    yes
}
