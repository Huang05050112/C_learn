#include<stdio.h>

void afunc(char a[],char b[]);

int main(void) 
{          
    char a[80],b[80]; 

    scanf("%s",a); 
    afunc(a,b); 
    printf("[%s]\n",b); 
     
    return 0; 
} 

void afunc(char a[],char b[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='1')
		{
			b[i]='0';
		}
		else
		{
			b[i]='1';
		}
		//b[i]=(a[i]-'0'+1)%2 + '0';//老師的 
	}
	b[i]=0;//結尾 
}
