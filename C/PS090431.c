/*
	
PS090431

�]�p�@�Ө��afunc(a,b)�A�Ө�Ʒ|�N�r��a�����ťէR����إߦ��r��b�C

=== �D�{�� ===
int main(void)
{
	char a[80],b[80];
	
	gets(a);
	afunc(a,b);
	printf("[%s]",b);
	
	return 0;
}

=== �d�Ұ��浲�G(1) ===
A B C <- ��J
[ABC]

=== �d�Ұ��浲�G(2) ===
AB  CD    EF <- ��J
[ABCDEF]

=== �d�Ұ��浲�G(3) ===
This is a book. <- ��J�r��
[Thisisabook.]PS
*/
#include<stdio.h>

void afunc(char a[],char b[]);

int main(void) 
{ 
    char a[80],b[80]; 
     
    gets(a); 
    afunc(a,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

void afunc(char a[],char b[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			b[j++]=a[i];
		}
	}
	b[j]=0;
}
