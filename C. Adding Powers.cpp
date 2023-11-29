#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=0;i<101;i++)
#define    lp3   for(j=0;j<100;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>n>>k;
        ll a[101]={0};
        lp1
        {
            cin>>x;
            lp3
            {
                a[j]=a[j]+(x%k);
                x=x/k;
                if(x==0)
                    break;
            }
        }
        c=0;
        lp2
        {
            if(a[i]>1)
                c=1;
        }
        if(c)
            no
        else
            yes
    }
}
