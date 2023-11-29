#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,m,i,c=0;
    cin>>n>>m;
    ll a[n+1],b[m+1],e=0,o=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]%2==0)
        {
            if(o!=0)
            {
                o--;
                c++;
            }
        }
        else
        {
            if(e!=0)
            {
                e--;
                c++;
            }
        }
    }
    cout<<c;
}
