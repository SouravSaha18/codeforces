#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=0,j=n-1;i<j;)
#define    lp3   for(j=n-1;j>i;j--)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0,x,y,z;
st s,r,p,q;
map<st,ll>mp;
int main()
{
    cin>>n;
    ll a[n+1],b[n+1],d[n+1];
    lp1
        cin>>a[i];
    lp1
    {
        cin>>b[i];
        d[i]=a[i]-b[i];
    }
    sort(d,d+n);
    lp2
    {
        if((d[i]+d[j])>0)
        {
            c=c+(j-i);
            j--;
        }
        else
            i++;
    }
    cout<<c;
}
