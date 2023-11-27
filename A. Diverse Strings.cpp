#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll t,c,i;
    cin>>t;
    while(t--)
    {
        st a;
        cin>>a;
        c=1;
        sort(a.begin(),a.end());
        for(i=1;i<a.size();i++)
        {
            if(a[i]!=a[i-1]+1)
            {
                c=0;
                break;
            }
        }
        if(c!=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
