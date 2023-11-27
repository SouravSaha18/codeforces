#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,k,i,c=0;
    cin>>n>>k;
    for(i=1;;i++)
    {
        if(i>n)
            i=1;
        c=c+i;
        if(c==k)
        {
            cout<<"0";
            break;
        }
        if(c>k)
        {
            cout<<(k-(c-i));
            break;
        }
    }
}
