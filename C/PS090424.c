/*�S�g�� 
PS090424

�]�p�@�Ө��afunc(a,m,n,b)�A�Ө�Ʒ|�N�r��a�ۦ�mm�}�l�_�A�s��n�Ӧr���������r��A�إߦ��r��b�C
���]m���W�La�r����סA�_�hb�r�ꬰ�Ŧr��C
���]m+n�W�La�r����סA�h�ƻs��a�r�굲���C

=== �D�{�� ===
int main(void)
{
	char a[80],b[80];
	int m,n;
	
	scanf("%s",a);
	scanf("%d%d",&m,&n);
	afunc(a,m,n,b);
	printf("[%s]",b);
	
	return 0;
}

=== �d�Ұ��浲�G(1) ===
12345 <- ��J
2 <- ��J
2 <- ��J
[34]

=== �d�Ұ��浲�G(2) ===
123456 <- ��J
6 <- ��J
2 <- ��J
[]

=== �d�Ұ��浲�G(3) ===
ABC <- ��J
1 <- ��J
3 <- ��J
[BC]
*/
#include<stdio.h>

void afunc(char a[],int m,int n,char b[]);

int main(void) 
{ 
    char a[80],b[80]; 
    int m,n; 
     
    scanf("%s",a); 
    scanf("%d%d",&m,&n); 
    afunc(a,m,n,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

void afunc(char a[],int m,int n,char b[])
{
	int i,j;
	for(j=0;a[j]!=0;j++)
	{
		;
	}
	for(i=0;a[i]!=0;i+)
	{
		if(m>j)
		{
			b[0]=0;
		}
		else if((m+n)>j)
		{
			b[i]=a[m]
		}
		else
		{
			
		}
	}
	b[i]=0;
}
