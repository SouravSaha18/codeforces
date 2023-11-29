#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i,j,x;
    cin>>n;
    x=n/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)<=(n-x) || (i+j)>((n*2)-x) || abs(i-j)>=(n-x))
                cout<<"*";
            else
                cout<<"D";
        }
        cout<<endl;
    }
}
