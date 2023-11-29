#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll  n,k,i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<k<<' ';
            else
                cout<<"0"<<' ';
        }
        cout<<endl;
    }
}
