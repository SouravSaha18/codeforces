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
#define    no    cout<<"NO"<<endl;
ll n,h,m,t,i,j,b=0,c=0,x=0,y,z,d;
int main()
{
    cin>>n;
    ll a[n+1];
    lp1
        cin>>a[i];
    lp1
    {
        b=c+15;
        if(c<a[i] && b>=a[i])
        {
            c=a[i];
            if(b>=90)
            {
                cout<<"90";
                break;
            }
            if(i==(n-1))
            {
                x=15+a[i];
                if(x>=90)
                    cout<<"90";
                else
                    cout<<x;
            }
        }
        else
        {
            cout<<b;
            break;
        }
    }
}
