#include<stdio.h>
int main()
{
    int x,n,a,b,i,p,q,k;
    scanf("%d",&x);
    while(x--)
    {
        p=0;
        q=0;
        scanf("%d%d%d",&n,&a,&b);
        for(i=0;i<a;i++)
        {
            scanf("%d",&k);
            if(k>p)
                p=k;
        }
        for(i=0;i<b;i++)
        {
            scanf("%d",&k);
            if(k>q)
                q=k;
        }
        if(p>q)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
