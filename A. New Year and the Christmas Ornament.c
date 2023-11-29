#include<stdio.h>
int main()
{
    int m,b,n,x,a,c;
    scanf("%d%d%d",&m,&b,&n);
    a=m+1;
    c=n-1;
    if(a<=b && a<=c)
        x=a;
    else if(b<=a && b<=c)
        x=b;
    else
        x=c;
    printf("%d",x*3);
    return 0;
}
