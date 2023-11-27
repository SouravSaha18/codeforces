#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,i,x,y,z;
        cin>>a>>b;
        if(a<=b)
        {
            x=b-a;
            cout<<x<<endl;
        }
        else
        {
            if(a%b==0)
            {
                x=a/b;
                cout<<"0"<<endl;
            }
            else
            {
                x=a/b;
                y=(x+1)*b;
                z=y-a;
                cout<<z<<endl;
            }
        }
    }
}
