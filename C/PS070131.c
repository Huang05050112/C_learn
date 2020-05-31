//
#include<stdio.h>
int main(void)
{
	int n,m,i,j=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(i%4==0)
		{
			j++;
			if(i%100==0)
			{
				j--;
				if(i%400==0)
				{
					j++;
				}
			}
		}
	}
	printf("%d",j);
	
	
	return 0;
 } 
