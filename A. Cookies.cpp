#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],i,c=0,o=0,e=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c=c+a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    if(c%2==0)
        cout<<e;
    else
        cout<<o;
}
