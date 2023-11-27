#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string a,b;
    cin>>a>>b;
    ll x,i=0,c=0;
    x=b.size();
    while(i!=x)
    {
        if(b[i]==a[c])
            c++;
        i++;
    }
    cout<<c+1;
}
