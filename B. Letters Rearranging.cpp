#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define    ll    long long int
#define    db    double
#define    ch    char
#define    st    string
#define    lp1   for(i=1;i<=n;i++)
#define    lp2   for(j=0;j<n-1;j++)
#define    w     while(t--)
ll n,t,i,j,c=0,a,b;
int main()
{
    cin>>t;
    w
    {
        st s;
        cin>>s;
        sort(s.begin(),s.end());
        n=s.size();
        lp2
        {
            if(s[j]!=s[j+1])
            {
                c=1;
                break;
            }
        }
        if(s[0]==s.back())
            cout<<"-1"<<endl;
        else
            cout<<s<<endl;
    }
}
