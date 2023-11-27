#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
        printf("%d %d\n",a*10,b*10+1);
    else if(a==9 && b==1)
        printf("%d %d\n",9,10);
    else if(b==a+1)
        printf("%d %d\n",a,b);
    else
        printf("%d\n",-1);
    return 0;
}
