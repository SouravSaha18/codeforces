#include<stdio.h>
int main()
{
    int t,a,b,x,y,p,q,r,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&x,&y);
        x++;
        y++;
        p=b*(x-1);
        q=b*(a-x);
        r=a*(y-1);
        s=a*(b-y);
        if(p>=q && p>=r && p>=s)
            printf("%d\n",p);
        else if(q>=p && q>=r && q>=s)
            printf("%d\n",q);
        else  if(r>=q && r>=p && r>=s)
            printf("%d\n",r);
        else
            printf("%d\n",s);
    }
}
