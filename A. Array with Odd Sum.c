#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,x,c=0,d=0;
        scanf("%d",&n);
        int a[n+1];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==1)
                c++;
            else
                d++;
        }
        if(c%2==1)
            printf("YES\n");
        else
        {
            if(d && c)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
