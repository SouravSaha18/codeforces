#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int xxx, b, sss, aaa, i;
        char sou='0';
        cin>>xxx>>b>>sss;
        string s;
        cin>>s;
        aaa=s.size();
        for(i=aaa-2;i>=0;i--)
        {
            if(s[i]!=sou){
                if(s[i]=='A')sss-=xxx;
                else sss-=b;
                sou=s[i];
            }
            if(sss<0){i++;break;}
            if(sss==0){
                for( ;i>=0;i--){
                    if(s[i]!=sou)
                    {
                        i++;
                        break;
                    }
                    break;
                }
            }
        }
        cout<<(i<0?1:i+1)<<endl;
    }
}
