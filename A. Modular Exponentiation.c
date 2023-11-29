#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,x,y;
    scanf("%lld",&n);
    scanf("%lld",&m);
    x=pow(2,n);
    y=m%x;
    printf("%lld",y);
    return 0;
}
