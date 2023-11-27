#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n+1],i,c1=0,c2=0,c3=0,x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if((i+1)%3==1)
            c1=c1+a[i];
        else if((i+1)%3==2)
            c2=c2+a[i];
        else
            c3=c3+a[i];
    }
    if(c1>c2 && c1>c3)
        cout<<"chest"<<endl;
    else if(c1<c2 && c2>c3)
        cout<<"biceps"<<endl;
    else
        cout<<"back"<<endl;
}
