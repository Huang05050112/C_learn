/*�S�g�� 
PS090443

�]�p�@�ӵ{���A�ӵ{���|Ū�J�@�ӼƦr�r��A�ñN�r���ഫ����ơC

=== �D�{�� ===
int main(void)
{	 	
	char a[80];
	int n;

	scanf("%s",a);
	printf("[%d]",afunc(a));
	
	return 0;
}

=== �d�Ұ��浲�G(1) ===
10 <- ��J
[10]

=== �d�Ұ��浲�G(2) ===
1234 <- ��J
[1234]
*/
#include<stdio.h>

int afunc(char a[]);

int main(void) 
{          
    char a[80]; 
    int n; 

    scanf("%s",a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 

int afunc(char a[])
{
	int i,k[80],j;
	for(i=0;a[i]!=0;i++)
	{
		j+=a[i]-'0';
	}
	return j;
}
