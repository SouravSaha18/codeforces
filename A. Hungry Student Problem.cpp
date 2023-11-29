#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<3 || n==4 || n==5 || n==8 || n==11)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
