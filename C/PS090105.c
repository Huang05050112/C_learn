/*
	
PS090105
 
�]�p�@�ӵ{���A�ӵ{���i�H�s��Ū�J�����(��J0�ο�J20�Ӿ�ƫ�A�|������J)�A
����Ū�J�@�Ӿ��N�A��X����N�ӿ�J�������(N�q0�_��)�A
�p�GN�j��ҿ�J���ӼơA�h���NO�C

=== �d�Ұ��浲�G(1) ===
1 3 5 0 <- ��J
1 <- ��J
3

=== �d�Ұ��浲�G(2) ===
55 44 33 22 11 0 <- ��J
5 <- ��J
NO
*/
#include<stdio.h>

int main(void)
{
	int i,a[80],n;
	for(i=0;;i++)
	{
		scanf("%d ",&a[i]);
		if(a[i]==0 || a[i]==20)
		{
			break;
		}
	}
	scanf("%d",&n);
	
	if(n>i)
	{
		printf("NO");
	}
	else
	{
		printf("%d",a[n]);
	}
	
	return 0;
}
