#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=1;i<n;i++)
#define    lp3   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y,z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n>>m;
        ll a[n+1],b[m+1];
        lp1
            cin>>a[i];
        lp3
            cin>>b[j];
        sort(b,b+m);
        lp1
        {
            lp3
            {
                if(a[b[j]]<a[b[j]-1])
                    swap(a[b[j]],a[b[j]-1]);
            }
        }
        c=0;
        lp2
        {
            if(a[i]<a[i-1])
            {
                c=1;
                break;
            }
        }
        if(c)
            no
        else
            yes
    }
}
