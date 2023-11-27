#include<stdio.h>
int main()
{
	int n,a[100],i,j,k,c=0,max=0,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				b[k]=a[k];
			}
			for(k=i;k<=j;k++)
			{
				b[k]=1-b[k];
			}
			c=0;
			for(k=0;k<n;k++)
			{
				if(b[k]==1)
				{
					c++;
				}
			}
			if(c>max)
			{
				max=c;
			}
		}
	}
	printf("%d",max);
	return 0;
}
