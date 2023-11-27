#include<stdio.h>
int main()
{
    int n,m,a,b,c=0,d=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(c<a)
            c=a;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b);
        if(d<b)
            d=b;
    }
    printf("%d %d\n",c,d);
    return 0;
}
