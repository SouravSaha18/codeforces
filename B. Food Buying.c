#include<stdio.h>
int main()
{
    int t,n,i,x,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x=0;
        for(;;)
        {
            if(n<10)
            {
                x=x+n;
                printf("%d\n",x);
                break;
            }
            p=n%10;
            n=n-p;
            x=x+n;
            n=(n/10)+p;
        }
    }
}
