#include<stdio.h>
int main()
{
	int x,y,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		printf("%d %d\n",x,x*2);
	}
	return 0;
}
