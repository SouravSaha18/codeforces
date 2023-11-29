#include<stdio.h>
int main()
{
    double h,l,x;
    scanf("%lf%lf",&h,&l);
    x=(((l*l)-(h*h))/(2*h));
    printf("%.6f",x);
    return 0;
}
