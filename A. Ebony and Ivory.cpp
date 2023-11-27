#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(;;)
#define    lp3   for(j=0;j<11;j++)
#define    wl    while(t--)
#define    yes   cout<<"Yes"<<endl;
#define    no    cout<<"No"<<endl;
ll n,m,t,i,j,k,c,x=0,y,z,a,b;
st s,r,p,q;
map<st,ll>mp;
int main()
{
    cin>>a>>b>>c;
    if(c%a==0 || c%b==0 || c%(a+b)==0)
        x=1;
    else if((a+b)>c)
        x=0;
    else
    {
        lp2
        {
            c=c-a;
            if(c%b==0)
                x=1;
            if(c<1)
                break;
        }
    }
    if(x)
        yes
    else
        no
}
