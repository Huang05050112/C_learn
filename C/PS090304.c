/*
PS090304

�]�p�@�Ө�ơA�Ө�Ʒ|Ū�J�@�Ӿ�ư}�C(������0)�A�ñN�Ӱ}�C�ϧǦL�X�C

===�D�{��===
int main(void)
{
    int a[80],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
    {
        scanf("%d",&a[++i]);
    }
	afunc(a);
    
    return 0;
}

=== �d�Ұ��浲�G(1) ===
4 3 2 1 0 <- ��J4 3 2 1 0
1 2 3 4

=== �d�Ұ��浲�G(2) ===
10 20 30 40 50 60 70 80 90 0 <- ��J10 20 30 40 50 60 70 80 90 0
90 80 70 60 50 40 30 20 10
*/
#include<stdio.h>

int afunc(int a[]);

int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
    { 
        scanf("%d",&a[++i]); 
    } 
    afunc(a); 
     
    return 0; 
}

int afunc(int a[])
{
	int i,j,k=0,b=0;
	for(j=0;;j++)
	{
		if(a[j]==0)
		{
			break;
		}
		b++;	
	}
	for(i=b-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
 } 
