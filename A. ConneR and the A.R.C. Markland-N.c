#include<stdio.h>
int main()
{
    int t,n,s,k,i,j,p,c,d,a,b,q;
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        scanf("%d %d %d",&n,&s,&k);
        int m[k+1];
        for(i=1;i<=k;i++)
        {
            scanf("%d",&m[i]);
            if(m[i]==s)
                p=i;
        }
        if(p==0)
            printf("0\n");
        else
        {
            for(i=1;i<=k;i++)
                for(j=i+1;j<=k;j++)
                    if(m[i]>m[j])
                    {
                        d=m[i];
                        m[i]=m[j];
                        m[j]=d;
                    }
            a=s-1;
            b=s+1;
            p=0,
            q=0;
            for(i=1;i<=n;i++)
            {
                if(a<1)
                    p=1;
                if(b>n)
                    q=1;
                for(j=1;j<=k;j++)
                {
                    if(m[j]==a && a>0)
                        p=s-a;
                    if(m[j]==b && b<=n)
                        q=b-s;
                }
                if(p==0)
                {
                    printf("%d\n",s-a);
                    break;
                }
                else if(q==0)
                {
                    printf("%d\n",b-s);
                    break;
                }
                p=0;
                q=0;
                a--;
                b++;
            }
        }
    }
}
