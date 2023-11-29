#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define ch char
#define st string
int main()
{
    ll n,m,i,j,a=0,b=0,c=0,d=0,e=0,sum=0,x;
    cin>>n>>m;
    st p[n+1];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    ll q[m+1];
    for(i=0;i<m;i++)
    {
        cin>>q[i];
    }
    for(i=0;i<m;i++)
    {
        a=0,b=0,c=0,d=0,e=0;
        for(j=0;j<n;j++)
        {

			if(p[j][i]=='A')
			    a++;
			else if(p[j][i]=='B')
			    b++;
			else if(p[j][i]=='C')
			    c++;
			else if(p[j][i]=='D')
			    d++;
			else if(p[j][i]=='E')
			    e++;
        }
        x=max(a,max(b,max(c,max(d,e))));
        sum=sum+(x*q[i]);
    }
    cout<<sum;
}
