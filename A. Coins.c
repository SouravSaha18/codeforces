#include<stdio.h>
int main()
{
    long long n,s,c;
    scanf("%lld%lld",&n,&s);
    if(s%n!=0)
    {
        c=s/n+1;
        printf("%lld",c);
    }
    else
        printf("%lld",s/n);
    return 0;
}
