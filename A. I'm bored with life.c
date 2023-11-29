#include<stdio.h>
int main()
{
    int a,b,i,x,n=1;
    scanf("%d%d",&a,&b);
    if(a<b)
        x=a;
    else
        x=b;
    for(i=1;i<=x;i++)
    {
        n=n*i;
    }
    printf("%d",n);
    return 0;
}
