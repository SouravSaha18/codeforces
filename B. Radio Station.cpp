#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=0;i<n;i++)
#define    lp2   for(j=0;j<m;j++)
#define    wl    while(t--)
#define    yes   cout<<"YES"<<endl;
#define    no    cout<<"NO"<<endl;
map<string,string>mp;
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    st s1,s2,s3,s4,c;
    lp1
    {
        cin>>s1>>s2;
        mp[s2]=s1;
    }
    lp2
    {
        cin>>s3>>s4;
        c=s4.substr(0,s4.size()-1);
        cout<<s3<<" "<<s4<<" "<<"#" <<mp[c]<<endl;
    }
}
