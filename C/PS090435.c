/*
PS090435

�]�p�@�Ө��afunc(a)�A�Ө�Ʒ|�N�r��a���Ҧ����Ʀr�r���[�`�C

=== �D�{�� ===
int main(void)
{
	char a[80];
	
	gets(a);
	printf("[%d]",afunc(a));
	
	return 0;
}

=== �d�Ұ��浲�G(1) ===
123 <- ��J
[6]

=== �d�Ұ��浲�G(2) ===
1a2B3c4D <- ��J
[10]

=== �d�Ұ��浲�G(3) ===
1010.1010 <- ��J
[4]
*/
#include<stdio.h>

int afunc(char a[]);

int main(void) 
{ 
    char a[80]; 
     
    gets(a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 

int afunc(char a[])
{
	int i,k=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			k+=a[i]-'0';
		}
	}
	return k;
}
