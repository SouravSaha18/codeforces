#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<x;i++)
#define    lp2   for(j=x;j<=y;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,h,m,t,i,j,c=0,x,y,z,a[52]={0},b=0,d=0;
int main()
{
    ch s[102];
    cin>>s;
    x=strlen(s);
    lp1
    {
        if(s[i]=='o')
            c++;
    }
    if(c==0 || x%c==0)
        yes
    else
        no
}
