#include<stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d%d",&n,&m);
    if(m==n)
    {
        printf("0");
        return 0;
    }
    while(n<m)
    {
        if((m/n)%3==0)
        {
            n=n*3;
            c++;
        }
        else if((m/n)%2==0)
        {
            n=n*2;
            c++;
        }
        else
        {
            printf("-1");
            return 0;
        }
    }
    printf("%d",c);
    return 0;
}
