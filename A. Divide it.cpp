#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c,x;
        cin>>n;
        c=0;
        x=1;
        while(n!=1)
        {
            if (n%2==0)
				n/=2;
			else if(n%3==0)
				n=(n*2)/3;
			else if(n%5==0)
				n=(n*4)/5;
			else
            {
				x=0;
				break;
			}
			c++;
        }
        if(x==1)
            cout<<c<<endl;
        else
            cout<<"-1"<<endl;
    }
}
