#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<8;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<8;j++)
#define    wl    while(t--)
#define    pb    push_back
#define    srt   sort(a,a+n);
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,d,c1,x,y,z=0,p,q;
st s,r;
map<ll,ll>mp;
set<st>se;
int main()
{
    fast;
    st a[9];
    ll b=0,w=0;
    lp1
        cin>>a[i];
    lp1
    {
        lp3
        {
            if(a[i][j]=='Q')
                w=w+9;
            else if(a[i][j]=='R')
                w=w+5;
            else if(a[i][j]=='B')
                w=w+3;
            else if(a[i][j]=='N')
                w=w+3;
            else if(a[i][j]=='P')
                w=w+1;
            else if(a[i][j]=='p')
                b=b+1;
            else if(a[i][j]=='n')
                b=b+3;
            else if(a[i][j]=='b')
                b=b+3;
            else if(a[i][j]=='q')
                b=b+9;
            else if(a[i][j]=='r')
                b=b+5;
        }
    }
    if(w>b)
        cout<<"White";
    else if(b>w)
        cout<<"Black";
    else
        cout<<"Draw";
}
