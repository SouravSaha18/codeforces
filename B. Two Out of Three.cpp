#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p;
    int c=1;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
        string a, b;
        cin >> a >> b;
         p=0;
        if(b!="wine")
            p=1;
        else
        {
            if(a!="soda" && a!="water")
                p=1;

        }

        }
        if(p)
            cout<<"Case "<<c<<": No"<<endl;
        else
            cout<<"Case "<<c<<": Yes"<<endl;
        c++;
    }
    return 0;
}
