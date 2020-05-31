#include<stdio.h>
void afunc(char a[]); 
int main(void) 
{ 
    char a[80]; 
     
    scanf("%s",a); 
    afunc(a);     
    printf("[%s]\n",a); 
     
    return 0; 
} 

void afunc(char a[])
{
	int i,j,k;
	for(i=0;a[i]!=0;i++)
	{
		;
	}
	for(j=0;a[j]!=0;j++)
	{
		if(a[j]>='a'&&a[j]<='z')
		{
			a[j]=a[j]-'a'+'A';
		}
		else if(a[j]>='A'&&a[j]<='Z')
		{
			a[j]=a[j]-'A'+'a';
		}
		else
		{
			a[j]=a[j];
		}
	}
}
