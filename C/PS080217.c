#include<stdio.h>

int afunc(int n1,int n2);

int main(void) 
{ 
    int n1,n2; 
     
    scanf("%d%d",&n1,&n2); 
    printf("GCD=[%d]\n",afunc(n1,n2)); 
     
    return 0; 
}

int afunc(int n1,int n2)
{
	int i,n3,k;
	if(n1>=n2)
	{
		n3=n1;
	}
	else
	{
		n3=n2;
	}
	for(i=1;i<=n3;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			k=i;
		}
		
	}
	return k;
}
