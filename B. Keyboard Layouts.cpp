#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ch a[1010],b[1010],c[1010];
    ll x[150],i;
    cin>>a>>b>>c;
    for(i=0;i<26;i++)
    {
        x[a[i]]=i;
    }
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='A' && c[i]<='Z')
            cout<<ch(b[x[c[i]+32]]-32);
        else if(c[i]>='a' && c[i]<='z')
            cout<<b[x[c[i]]];
        else
            cout<<c[i];
    }
}

