#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,c=0,d=0,i;
    cin>>n;
    ch a[n+1];
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0')
            c++;
        else
            d++;
    }
    if(c!=d)
    {
        cout<<"1"<<endl<<a<<endl;
    }
    else
    {
        cout<<"2"<<endl<<a[0]<<' ';
        for(i=1;i<n;i++)
        {
            cout<<a[i];
        }
    }
}
