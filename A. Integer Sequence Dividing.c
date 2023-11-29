#include<stdio.h>
int main()
{
    long int n,x;
    scanf("%ld",&n);
    x=n%4;
    if(x==1 || x==2)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
