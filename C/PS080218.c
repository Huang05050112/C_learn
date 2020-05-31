#include<stdio.h>

int afunc(int n1,int n2);

int main(void) 
{ 
    int n1,n2; 
     
    scanf("%d%d",&n1,&n2); 
    printf("LCM=[%d]\n",afunc(n1,n2)); 
     
    return 0; 
} 


int afunc(int n1,int n2)
{
	int i,a=0,k=0;
	if(n1>=n2)
	{
		a=n1;
	}
	else
	{
		a=n2;
	}
	for(i=a;;i++)
	{
		if(i%n1==0 && i%n2==0)
		{
			k=i;	
			break;
		}
	}
	return k;
}
