#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll r,c,i,j,x,n=0,m=0;
    cin>>r>>c;
    st a[r+1];
    for(i=0;i<r;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(a[j][i]=='S')
                break;
            else if(j==r-1)
                n++;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]=='S')
                break;
            else if(j==c-1)
                m++;
        }
    }
    x=(n*r)+(c*m)-(n*m);
    cout<<x;
}
