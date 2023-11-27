#include<stdio.h>
int main()
{
    int t,a,b,c,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&n);
        if((a+b+c+n)%3==0)
        {
            x=(a+b+c+n)/3;
            if(x>=a && x>=b && x>=c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
