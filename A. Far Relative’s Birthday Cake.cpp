#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i,j,k,c=0;
    cin>>n;
    char a[n][n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='C')
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[i][k]=='C')
                        c++;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='C')
            {
                for(k=i+1;k<n;k++)
                {
                    if(a[k][j]=='C')
                        c++;
                }
            }
        }
    }
    cout<<c;
}
