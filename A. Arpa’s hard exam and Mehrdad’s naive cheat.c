#include<stdio.h>
int main()
{
    long int n,x;
    scanf("%ld",&n);
    x=n%4;
    if(n==0)
        printf("1\n");
    else
    {
        if(x==1)
            printf("8\n");
        if(x==2)
            printf("4\n");
        if(x==3)
            printf("2\n");
        if(x==0)
            printf("6\n");
    }
    return 0;
}
