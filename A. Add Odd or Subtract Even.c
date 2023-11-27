#include<stdio.h>
int main()
{
    int t,a,b,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        x=b-a;
        if(x==0)
            printf("0\n");
        else if(x>0)
        {
            if(x%2==0)
                printf("2\n");
            else
                printf("1\n");
        }
        else
        {
            x=x*(-1);
            if(x%2==1)
                printf("2\n");
            else
                printf("1\n");
        }
    }
    return 0;
}
