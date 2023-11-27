#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x;
    scanf("%lld",&n);
    if(n%2==0)
        x=pow(2,n/2);
    else
        x=0;
    printf("%lld",x);
    return 0;
}
