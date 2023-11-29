#include<stdio.h>
int main()
{
	long long int a[2025],x,y,q,m,n,i,j,k;
	char c[25][25],s[25][25];
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
        scanf("%s",&c[i]);
	for(i=0;i<m;i++)
        scanf("%s",&s[i]);
    scanf("%lld",&q);
	for(i=0;i<q;i++)
	{
	    scanf("%lld",&a[i]);
		x=a[i]%n;
		y=a[i]%m;
		if(x!=0)
            x=x-1;
		else
            x=n-1;
		if(y!=0)
            y=y-1;
		else
            y=m-1;
		printf("%s%s\n",c[x],s[y]);
	 }
	 return 0;
}
