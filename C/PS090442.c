/*�S�g��
PS090442

�]�p�@�ӵ{���A�ӵ{���|Ū�J�@��10�i�쥿��ơA�ñN�Ʀr�ഫ���r��C

=== �D�{�� ===
int main(void)
{	 	
	int n;
	char a[80];

	scanf("%d",&n);
	afunc(n,a);
	printf("[%s]\n",a);
	
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

void afunc(int n,char a[]);

int main(void) 
{          
    int n; 
    char a[80]; 

    scanf("%d",&n); 
    afunc(n,a); 
    printf("[%s]\n",a); 
     
    return 0; 
} 

void afunc(int n,char a[])
{
	int i,j,p=0;
	char k;
	for(i=0;n!=0;i++)
	{
		a[i]=n%10 + '0';
		n/=10;
	}
	a[i]=0;
	for(j=i;j>=0;j--)
	{
		k=a[p];
		a[p]=a[j];
		p++;
	}
}
