#include<stdio.h>



int main(void)
{
	int s[50]={0};
	int  n,i=0,a=0,k=0,p=1; 
	while (p>0)
	{
		scanf("%d",&s[i]);
		p=s[i];
		i++;
		a=i;
	}
	
	for(k=0;k<a;k++)
	{
		if(s[k]!=0)
		{
			printf("%d ",s[k]);
		}
	}
 } 
