#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i,j,c=0;
    cin>>n;
    char a[n][n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(a[i-1][j-1]==a[i-1][j+1] && a[i+1][j-1]==a[i-1][j+1] && a[i+1][j-1]==a[i+1][j+1] && a[i+1][j+1]==a[i][j] && a[i][j]=='X')
                c++;
        }
    }
    cout<<c;
}
