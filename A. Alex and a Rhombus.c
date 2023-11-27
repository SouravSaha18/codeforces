#include<stdio.h>
int main()
{
    int n,i,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        s=s+4*i;
    printf("%d",s);
    return 0;
}
