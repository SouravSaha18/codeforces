#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x=0,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                x = i+1;
        }
        if(x!=0)
            printf("1\n%d\n",x);
        else if(n==1)
            printf("-1\n");
        else
            printf("2\n1 2\n");
    }
    return 0;
}
