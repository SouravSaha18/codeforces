#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    fast  {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(i=m-1;i>=0;i--)
#define    lp3   for(j=0;j<c;j++)
#define    wl    while(n)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
#define    one   cout<<"-1"<<endl;
#define    haha  return 0;
ll n,m,t,i,j,k,c=0,c1,x,y,z=0,p[1000],q;
st s,r;
map<ll,ll>mp;
int main()
{
    cin>>n>>s;
    lp1
    {
        if(s[i]=='3')
        {
            p[c]=3;
            c++;
        }
        if(s[i]=='5')
        {
            p[c]=5;
            c++;
        }
        if(s[i]=='7')
        {
            p[c]=7;
            c++;
        }
        if(s[i]=='2')
        {
            p[c]=2;
            c++;
        }
        if(s[i]=='4')
        {
            p[c]=3;
            c++;
            p[c]=2;
            c++;
            p[c]=2;
            c++;
        }
        if(s[i]=='6')
        {
            p[c]=3;
            c++;
            p[c]=5;
            c++;
        }
        if(s[i]=='8')
        {
            p[c]=7;
            c++;
            p[c]=2;
            c++;
            p[c]=2;
            c++;
            p[c]=2;
            c++;
        }
        if(s[i]=='9')
        {
            p[c]=3;
            c++;
            p[c]=7;
            c++;
            p[c]=3;
            c++;
            p[c]=2;
            c++;
        }
    }
    //cout<<c;
    x=c;
    sort(p,p+c);
    reverse(p,p+c);
    lp3
        cout<<p[j];
}
