/*
PS090108

�]�p�@�ӵ{���A�ӵ{���|Ū�J�@��10�i��Ʀr�A���ഫ��16�i��Ʀr(�Ʀr���H��u-���j)�C

=== �d�Ұ��浲�G(1) ===
10 <- ��J10[Enter]
A

=== �d�Ұ��浲�G(2) ===
30 <- ��J30[Enter]
1-E

=== �d�Ұ��浲�G(3) ===
312 <- ��J312[Enter]
1-3-8
*/
#include<stdio.h>

int main(void)
{
	int n,a[80],i,j;
	char h[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	scanf("%d",&n);
	
	while(n>0)
	{
		a[i++]=n%16;
		n/=16;
	}
	
	for(j=i-1;j>0;j--)
	{
		printf("%c-",h[a[j]]);
	}
	printf("%c",h[a[0]]);
	
	return 0;
 } 
