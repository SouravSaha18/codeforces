#include<stdio.h>
int main()
{
    int n,t,s,i,a[30000];
    scanf("%d%d",&n,&t);
    for(i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    for(i=1;;)
    {
        s=i+a[i-1];
        if(s==t)
        {
            printf("YES\n");
            return 0;
        }
        i=s;
        if(s>t)
            break;
    }
    printf("NO\n");
    return 0;
}
