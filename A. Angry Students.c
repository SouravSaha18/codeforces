#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,i,c,d;
    char a[105];
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        d=0;
        scanf("%d%s",&x,a);
        for(i=0;i<x;i++)
        {
            if(a[i]=='A')
            {
                d=0;
                while(a[i+1]=='P' && i<x)
                {
                    d++;
                    i++;
                }
                if(c<d)
                    c=d;
            }
        }
        printf("%d\n",d);
    }
    return 0;
}
