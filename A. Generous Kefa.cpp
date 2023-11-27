#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    d     double
#define    ch    char
#define    st    string
#define    lp    for(i=0;i<n-1;i++)
#define    w     while(t--)
int main()
{
    ll n,k,i,c=1,x=0;
    st a;
    cin>>n>>k>>a;
    sort(a.begin(),a.end());
    lp
    {
        if(a[i]==a[i+1])
            c++;
        else
        {
            if(c>k)
            {
                x=1;
                break;
            }
            c=1;
        }
    }
    if(x==1 || c>k)
        cout<<"NO";
    else
        cout<<"YES";
}
