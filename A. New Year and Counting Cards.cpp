#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string a;
    cin>>a;
    ll i,x,c=0;
    x=a.size();
    for(i=0;i<x;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' || a[i]=='u' || a[i]=='1' || a[i]=='3' || a[i]=='5' || a[i]=='7' || a[i]=='9')
            c++;
    }
    cout<<c;
}
