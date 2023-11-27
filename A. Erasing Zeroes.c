#include<stdio.h>
int main()
{
    int t,i,c,x,y;
    char a[102];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        c=0;x=0;y=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='1')
            {
                x=i;
                break;
            }
        }
        for(i=(strlen(a)-1);i>0;i--)
        {
            if(a[i]=='1')
            {
                y=i;
                break;
            }
        }
        for(i=x;i<=y;i++)
        {
            if(a[i]=='0')
                c++;
        }
        if(x==0 && y==0)
            printf("0\n");
        else
            printf("%d\n",c);
    }
    return 0;
}
