#include<bits/stdc++.h>
using namespace std;
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
typedef long long int ll;
typedef string S;
#define M 1e18
#define AS 250002
#define in(x)  cin>>x
#define o(x)  cout<<x
#define sp cout<<' '
#define nw cout<<endl
#define rt return
#define fr(i,a,n) for(ll i=a;i<=n;i++)
#define frm(i,a,n) for(ll i=n;i>=a;i--)
#define P pair<ll,ll>
#define vc vector<ll>
#define pb push_back
#define MP map<ll,ll>
ll a,b,c,i,j,k,l,m,n,p,q,r,x,y,z,ts,mn=10e17,mod=10e8+7;
ll ar[AS],br[AS],xr[AS];
int main()
{
    fast;
    in(ts);

    while(ts--)
    {
        in(n);

        vc v;

        fr(i,0,n-1)
        {
            in(ar[i]);
        v.pb(ar[i]);
        }
        sort(v.begin(),v.end());
        c=-1;

        fr(i,1,10000)
        {
            vc v1,v2;

                fr(j,0,n-1)
                v1.pb(i^v[j]);

                sort(v1.begin(),v1.end());
                if(v1==v){c=i;break;}
        }
        o(c);nw;
    }
}
