#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=m-1;i>=0;i--)
#define    lp2   for(i=0;i<k;i++)
#define    lp3   for(j=0;j<9;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
ll m,t,i,j,k,c;
ll x,y;
db z;
int main()
{
    fast;
    st n;
    cin>>n;
    m=n.size();
    k=m;
    lp1
    {
        if(n[i]=='0')
            k--;
        else
        {
            break;
        }
    }
    lp2
        cout<<n[i];
    cout<<endl;
    cout<<"Stay at Home";
}
