#include<stdio.h>
int main()
{
    int n,k,i,c=0,d=0;
    scanf("%d%d",&n,&k);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
            c++;
        if(a[i]>k)
            break;
    }
    if(c<n)
    {
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<=k)
                d++;
            if(a[i]>k)
                break;
        }
    }
    printf("%d",c+d);
    return 0;
}
