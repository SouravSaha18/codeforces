#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,i,c=0,j,d=0,x=0;
    string s;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>s;
        c=0;
        for(j=0;j<n;j++)
        {
            if(s[j]=='1')
                c++;
        }
        if(c==n)
        {
            d=0;
        }
        else
        {
            d++;
        }
        x=max(x,d);
    }
    cout<<x;
}
