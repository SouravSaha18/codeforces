#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n%2==0)
        printf("%ld 8",n+8);
    else
        printf("%ld 9",n+9);
    return 0;
}
