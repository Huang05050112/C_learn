//
#include<stdio.h>
int main(void)
{
	int n,m,i,j=0;
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=n;i++)
	{
		if(i%m == 0)
		{
			j+=i;
		}		
	}
	printf("ANS=%d",j);
	
	return 0;
 } 
