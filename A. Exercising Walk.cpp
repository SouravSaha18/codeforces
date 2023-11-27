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
ll n,m,t,i,j,c,x,y,z,a,b,d,x1,x2,y2;
int main()
{
    cin>>t;
    wl
    {
        ll y1;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if(((a || b) && x1==x2) || ((c || d) && y1==y2))
            no
        else
        {
            if((a>b && x-x1<a-b) || (b>a && x2-x<b-a))
               no
            else if((c>d && y-y1<c-d) || (d>c && y2-y<d-c))
                no
            else
                yes
        }
    }
}
