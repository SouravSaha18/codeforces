#include<stdio.h>
int main()
{
    long int a,b;
    scanf("%ld%ld",&a,&b);
    if(a==b)
        printf("%ld",b);
    else
        printf("2");
    return 0;
}
