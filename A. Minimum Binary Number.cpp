#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i,c=0,d=0;
    st a;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0')
            c++;
        else
            d++;
    }
    if(d!=0)
        cout<<"1";
    for(i=0;i<c;i++)
        cout<<"0";
}
