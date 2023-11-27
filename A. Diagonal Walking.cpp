#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n-1;)
#define    lp2   for(j=1;j<n;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll n,m,t,i,j,c=0;
st x,y,z;
int main()
{
    cin>>n>>x;
    lp1
    {
        if(x[i]!=x[i+1])
        {
            c++;
            i=i+2;
        }
        else
            i++;
    }
    cout<<(n-c);
}
