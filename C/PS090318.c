/*
PS090318

�]�p�@�Ө�ơA�N�}�Ca�����e�ϦV�ƦC(���0��ܰ}�C����)�C

===�D�{��===
int main(void)
{
    int a[80],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

	afunc(a);
	
	for (i=0;a[i]!=0;i++)
		printf("%d ",a[i]);
    
    return 0;
}

=== �d�Ұ��浲�G(1) ===
4 3 2 1 0 <- ��J4 3 2 1 0
1 2 3 4 

=== �d�Ұ��浲�G(2) ===
11 55 33 55 44 55 0 <- ��J11 55 33 55 44 55 0
55 44 55 33 55 11
*/
#include<stdio.h>
void afunc(int a[]);
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    afunc(a); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
}

void afunc(int a[])
{
	int i=0,n,k,j=0,end,b[80];
	for(end=1;a[end]!=0;end++)
	{
		;
	}
/*	
	for(i=end-1;i>=0;i--)
	{
		b[j++]=a[i];
	}
	b[j]=0;
	
	for(n=0;n<end;n++)
	{
		a[n]=b[n];
	}*/
	for(i=0;i;i++)
	{
		
	 } 
}
