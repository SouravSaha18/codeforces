#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=0;i<26;i++)
#define    lp3   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,k,c=0;
ll x,y,z;
st s;
int main()
{
    fast;
    cin>>t;
    wl
    {
        cin>>n>>m;
        cin>>s;
        ll a[m+1],b[26]={0},c[26]={0};
        lp3
           cin>>a[j];
        sort(a,a+m);
        x=0;
        lp1
        {
            b[s[i]-97]++;
            c[s[i]-97]++;
            baal:
            if(a[x]==i+1 && x<m)
            {
                for(k=0;k<26;k++)
                    b[k]=b[k]+c[k];
                x++;
                if(a[x]==a[x-1])
                    goto baal;
            }
        }
        lp2
            cout<<b[i]<<' ';
        cout<<endl;
    }
}
