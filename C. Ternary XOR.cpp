#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,i,c;
        string b;
        cin>>a>>b;
        c=0;
        for(i=0;i<a;i++)
        {
            if(b[i]=='1')
            {
                if(c==0)
                {
                    cout<<"1";
                    c=1;
                }
                else
                    cout<<"0";
            }
            else if(b[i]=='0')
                cout<<"0";
            else
                {
                    if(c==0)
                    {
                        cout<<"1";
                    }
                    else
                        cout<<"0";
                }
        }
        cout<<endl;
        c=0;
        for(i=0;i<a;i++)
        {
            if(b[i]=='1')
            {
                if(c==0)
                {
                    cout<<"0";
                    c=1;
                }
                else
                    cout<<"1";
            }
            else if(b[i]=='0')
                cout<<"0";
            else
                {
                    if(c==0)
                    {
                        cout<<"1";
                    }
                    else
                        cout<<"2";
                }
        }
        cout<<endl;
    }
}
