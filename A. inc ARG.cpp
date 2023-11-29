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
ll n,m,t,i,j,c=1,x=0,y,z;
int main()
{
    cin>>n;
    st s;
    cin>>s;
    lp1
    {
        if(s[i]=='1')
            c++;
        else
            break;
    }
    if(c>n)
        cout<<n;
    else
        cout<<c;
}
