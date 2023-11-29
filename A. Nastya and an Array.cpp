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
ll n,m,t,i,j,c=1,x,y,z,a,b,d;
int main()
{
    cin>>n;
    ll a[n+1];
    lp1
    {
        cin>>a[i];
        if(a[i]==0)
            c=0;
    }
    sort(a,a+n);
    lp2
    {
        if(a[i])
        {
            if(a[j]!=a[j+1])
                c++;
        }
    }
    cout<<c;
}
