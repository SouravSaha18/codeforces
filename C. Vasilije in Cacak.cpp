#include <bits/stdc++.h>
using namespace std;
int c=1;
void basicIO() {
    int n,i;
    cin>>n;
    int p=0;
    for(i=0;i<n;i++)
    {
        string a, b;
        cin >> a >> b;
        if(b!="wine" || a=="wine")
            p=1;
    }

    if(p)
        cout<<"Case "<<c<<": No"<<endl;
    else
        cout<<"Case "<<c<<": Yes"<<endl;
    c++;
}

int main() {
    int t;
    while(t--){
        basicIO();
    }
    return 0;
}
