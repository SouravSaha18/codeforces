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
ll n,m,t,i,j,c=0,x=0,y,z;
int main()
{
    cin>>n;
    lp1
    {
        cin>>m;
        if(m<0)
            c++;
        else if(m>0)
            x++;
    }
    if(n%2==0)
        y=n/2;
    else
        y=(n/2)+1;
    if(x>=y)
        cout<<"1";
    else if(c>=y)
        cout<<"-1";
    else
        cout<<"0";
}
