/*
PS090433

�]�p�@�Ө��afunc(a,b,c)�A�Ө�Ʒ|�N�r��a�P�r��b�v�r�X�֫�إߦ��r��c(���]�r��a�Mb���פ@�P)�C

=== �D�{�� ===
int main(void)
{
	char a[80],b[80],c[80];
	
	gets(a);
	gets(b);
	afunc(a,b,c);
	printf("[%s]",c);
	
	return 0;
}

=== �d�Ұ��浲�G(1) ===
123 <- ��J
ABC <- ��J
[1A2B3C]

=== �d�Ұ��浲�G(2) ===
ABCDEF <- ��J
abcdef <- ��J
[AaBbCcDdEeFf]

=== �d�Ұ��浲�G(3) ===
This is a cat. <- ��J�r��
That is a dog. <- ��J�r��
[TThhiast  iiss  aa  cdaotg..]
*/
#include<stdio.h>

void afunc(char a[],char b[],char c[]);

int main(void) 
{ 
    char a[80],b[80],c[80]; 
     
    gets(a); 
    gets(b); 
    afunc(a,b,c); 
    printf("[%s]",c); 
     
    return 0; 
} 

void afunc(char a[],char b[],char c[])
{
	int i,j=0,k=0;
	for(i=0;b[k]!=0;i++)
	{
		if(i%2==0)
		{
			c[i]=a[j++];
		}
		else
		{
			c[i]=b[k++];
		}
	}
	/*�Ѯv�� 
	for(i=0;a[i]!=0;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	*/
	c[i]=0;
	
}
