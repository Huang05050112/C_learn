/*
PS090321

�]�p�@�Ө�ơA�Ǧ^�}�Ca����1�Ӥ����A�ñN�Ӥ����R���A�B���򤸯��V�e����(���0��ܰ}�C����)�C

===�D�{��===
int main(void)
{
    int a[80],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

	printf("[%d] ", afunc(a));
	
	for (i=0;a[i]!=0;i++)
		printf("%d ",a[i]);
    
    return 0;
}

=== �d�Ұ��浲�G(1) ===
4 3 2 1 0 <- ��J4 3 2 1 0
[4] 3 2 1 

=== �d�Ұ��浲�G(2) ===
11 55 33 55 44 55 0 <- ��J11 55 33 55 44 55 0
[11] 55 33 55 44 55
*/
#include<stdio.h>
int afunc(int a[]);
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d] ", afunc(a)); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 


int afunc(int a[])
{
	int k,j,i;
	k=a[0];
	for(i=1;a[i]!=0;i++)
	{
		a[i-1]=a[i];
	}
	a[i-1]=0;
	
	return k;	
}
