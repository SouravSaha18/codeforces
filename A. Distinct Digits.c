#include<stdio.h>
int main()
{
	int l,r,f,i,j,g=0;
	scanf("%d%d",&l,&r);
	for(i=l;i<=r;i++)
	{
		int a[10]={0};
		f=1;
		for(j=i;j>0;j=j/10)
		{
			if(a[j%10]==1)
			{
				f=0;
				break;
			}
			else
				a[j%10]=1;
		}
		if(f==1)
		{
			printf("%d\n",i);
			g=1;
			break;
		}
	}
	if(g==0)
		printf("-1\n");
	return 0;
}
