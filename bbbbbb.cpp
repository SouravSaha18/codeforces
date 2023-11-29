#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,score,hashval;

    cout<<"How many student:";
    cin>>n;
    pair<int,pair<int,int> >pr[n+2];
    for(i=1;i<=n;i++)
    {
        int cnt=1e5;
        cout<<"Enter marks obtain by student "<<i<<endl;
        int marks;
        score=hashval=0;
        for(j=1;j<=6;j++)
        {
            cin>>marks;
            score+=marks;
            hashval+=marks*cnt;
            cnt/=10;
        }
        pr[i]={score,{hashval,i}};
    }
    sort(pr+1,pr+n+1);
    cout<<"Roll     Merit   total_number"<<endl;
    for(i=n;i>=1;i--)
    {
        cout<<pr[i].second.second<<"         "<<n-i+1<<"             "<<pr[i].first<<endl;
    }
}


