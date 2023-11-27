#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1    for(i=0;i<5;i++)
#define    lp2    for(j=0;j<4;j++)
#define    wl     while(t--)
ll n[5],t,i,j,c=1,a[101]={0},b=0,x=0;
int main()
{
    lp1
    {
        cin>>n[i];
        x=x+n[i];
    }
    sort(n,n+5);
    lp2
    {
        if(n[j]==n[j+1])
        {
            c++;
            if(c>1 && c<4)
            {
                b=max(b,(c*n[j]));
            }
        }
        else
        {
            c=1;
        }
    }
    cout<<(x-b);
}


