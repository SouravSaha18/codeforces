#include<stdio.h>
int main()
{
    long long int a,n,d,b,p,q,r,s,t,m,o,x,y;
    scanf("%lld",&a);
    while(a--)
    {
        scanf("%lld%lld%lld",&n,&d,&b);
        x=0,y=0;
        if(n%2==0)
        {
            p=n/2; m=n/d; q=p/d; r=p%d;
            if(m==0)
                x=n;
            else if(r==0)
            {
                y=(q*d)+((q-1)*b);
                s=(q-1)*b;
                if(p-s>0)
                    x=y+(p-s);
                else
                    x=y;
            }
            else
            {
                y=(q*d)+(q*b)+r;
                s=q*b;
                if(p-s>0)
                    x=y+(p-s);
                else
                    x=y;
            }
        }
        else
        {
            p=(n/2)+1; o=n/2; m=n/d; q=p/d; r=p%d;
            if(m==0)
                x=n;
            else if(r==0)
            {
                y=(q*d)+((q-1)*b);
                s=(q-1)*b;
                if(o-s>0)
                    x=y+(o-s);
                else
                    x=y;
            }
            else
            {
                y=(q*d)+(q*b)+r;
                s=q*b;
                if(o-s>0)
                    x=y+(o-s);
                else
                    x=y;
            }
        }
        printf("%lld\n",x);
    }
    return 0;
}
