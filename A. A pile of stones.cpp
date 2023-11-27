#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,i,c=0;
    cin>>n;
    st a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='+')
            c++;
        else
        {
            c--;
            if(c<0)
                c=0;
        }
    }
    cout<<c;
}
