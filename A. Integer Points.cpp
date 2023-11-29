#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c,x,y,z,a=0,b=0,d=0;
int main()
{
    cin>>t;
    wl
    {
        c=0,a=0,b=0,d=0;
        cin>>n;
        lp1
        {
            cin>>x;
            if(x%2==1)
                a++;
            else
                b++;
        }
        cin>>m;
        lp2
        {
            cin>>y;
            if(y%2==1)
                c++;
            else
                d++;
        }
        cout<<((a*c)+(b*d))<<endl;
    }
}
