#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],i,c=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[a[a[i]]]==i)
            c++;
    }
    if(c)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
