/*
PS080216

�]�p�@�Ө�ơA�Ө�Ʒ|Ū�J�@��10�i�쥿��ơA�ഫ��2�i��Ʀr�A�öǦ^2�i��Ʀr�����סC
 
===�D�{��(���o�ܧ�)===
int main(void)
{
	int n;
	
	scanf("%d",&n);
	printf("[%d]",afunc(n));
	
	return 0;
} 


=== �d�Ұ��浲�G(1) ===
10 <- ��J10
[4]

=== �d�Ұ��浲�G(2) ===
10000 <- ��J10000
[14]
*/
#include<stdio.h>

int afunc(int n);

int main(void) 
{ 
    int n; 
     
    scanf("%d",&n); 
    printf("[%d]",afunc(n)); 
     
    return 0; 
}

int afunc(int n)
{
	int i,k=0,n1;
	while(1)
	{
		n=n/2;
		i++;
		if(n==0)
		{
			break;
		}
	}
	return i;
}
