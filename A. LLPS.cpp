#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(;;)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no   cout<<"NO"<<endl;
ll n,h,m,t,i,j,b=0,c=0,x,y,z,d;
int main()
{
    ch a[25];
    cin>>a;
    n=strlen(a);
    sort(a,a+n);
    reverse(a,a+n);
    lp1
    {
        if(a[i]!=a[i+1])
        {
            cout<<a[i];
            break;
        }
        cout<<a[i];
    }
}
