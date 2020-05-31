#include<stdio.h>

int afunc(char a[],char c);

int main(void) 
{ 
    char a[80],c; 
     
    scanf("%c",&c); 
    scanf("%s",a); 
    printf("[%d]",afunc(a,c)); 
     
    return 0; 
}

int afunc(char a[],char c)
{
	int i,k;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==c)
		{
			k=i;
			break;
		}
		else
		{
			k=-1;
		}
	}
	return k;
 } 
