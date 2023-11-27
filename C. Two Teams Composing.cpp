#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=0;i<n-1;i++)
#define    lp3   for(j=i+2;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c;
ll x,y;
db z;
int main()
{
    cin>>t;
    wl
    {
        cin>>n;
        ll a[n+1];
        lp1
            cin>>a[i];
        sort(a,a+n);
        c=1;
        m=0;
        k=1;
        lp2
        {
            if(a[i]==a[i+1])
                k++;
            else
            {
                c++;
                m=max(m,k);
                k=1;
            }
        }
        m=max(m,k);
        //cout<<m<<' '<<c<<endl;
        if(n==1)
            cout<<"0"<<endl;
        else
        {
            if(c>m)
                cout<<m<<endl;
            else if(c<m)
                cout<<c<<endl;
            else
                cout<<(c-1)<<endl;
        }
    }
}
