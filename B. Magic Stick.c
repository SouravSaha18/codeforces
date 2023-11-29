#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        if(x>3)
            printf("YES\n");
        else if(x==1)
        {
            if(y==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if(y<=3)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
