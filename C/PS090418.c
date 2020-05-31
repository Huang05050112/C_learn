#include<stdio.h>
void afunc(char a[],char b[],char c[]);
int main(void) 
{          
    char a[80],b[80],c[80]; 

    scanf("%s",a); 
    scanf("%s",b); 
    afunc(a,b,c); 
    printf("[%s]\n",c); 
     
    return 0; 
} 

void afunc(char a[],char b[],char c[])
{
	int i,j,k;
	for(i=0;a[i]!=0;i++)
	{
		;
	}
	
	for(j=0;i>=j;j++)
	{
		if(a[j]==b[j])
		{
			c[k++]=a[j];
		}
		else
		{
			c[k++]='0';
		}
	}
}

