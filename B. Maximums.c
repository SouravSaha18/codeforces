#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n+1],i,c=0,b,max;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        max=a[i]+c;
        printf("%lld ",max);
        if(max>c)
            c=max;
    }
    return 0;
}
