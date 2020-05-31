#include<stdio.h>

int afunc(int n1,int n2);

int main(void) 
{          
    int n1,n2; 

    scanf("%d%d",&n1,&n2);     
    printf("[%d]",afunc(n1,n2)); 
     
    return 0; 
} 

int afunc(int n1,int n2)
{
	int n;
	n=n1*10+n2;
	return n;
}
