#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll i,j,n,m,c=0,d=0,p=0,x,y;
    ch a[101000];
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        cin>>a;
        for(j=0;j<n;j++)
        {
            if(a[j]=='B')
            {
                c=c+i;
                d=d+j;
                p++;
            }
        }
    }
    x=(c/p)+1;
    y=(d/p)+1;
    cout<<x<<' '<<y;
}
