#include<stdio.h>
int main()
{
    int n,a,b,x;
    scanf("%d",&n);
    while(n--)
    {
        x=0;
        scanf("%d%d",&a,&b);
        x=((23-a)*60)+(60-b);
        printf("%d\n",x);
    }
    return 0;
}
