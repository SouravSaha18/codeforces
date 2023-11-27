#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    if(a>b)
        x=a;
    else
        x=b;
    if(x==1)
        printf("1/1");
    if(x==2)
        printf("5/6");
    if(x==3)
        printf("2/3");
    if(x==4)
        printf("1/2");
    if(x==5)
        printf("1/3");
    if(x==6)
        printf("1/6");
    return 0;
}
