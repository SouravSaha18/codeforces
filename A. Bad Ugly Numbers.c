#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("-1\n");
            continue;
        }
        for(i=0;i<n-2;i++)
        {
            printf("2");
        }
        if((2*(n-2)+5)%3!=0)
        {
            printf("23");
        }
        else
        {
            printf("33");
        }
        printf("\n");
    }
}
