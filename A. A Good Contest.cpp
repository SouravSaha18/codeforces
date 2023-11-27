#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,i,c,a,b;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s>>a>>b;
        if(a>=2400 && b>a)
            c=1;
    }
    c==1?cout<<"YES":cout<<"NO";
}

