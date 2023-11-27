#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,x=0,a,j;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(i=0;i<n;i++)
        {
            if((s[i]-48)%2)
                x++;
        }
        if(x%2==1)
            a=2;
        else
            a=1;
        for(j=i-1;j>=0;j--)
        {
            if((s[j]-48)%2)
                a--;
            if(a==0)
            {
                s[j+1]='\0';
                break;
            }
        }
        if(j==-1)
            printf("-1\n");
        else
            printf("%s\n",s);
    }
    return 0;
}
