/*
	
PS090103
 
�]�p�@�ӵ{���A�ӵ{���|Ū�J�@�Ӿ�ƼƦC(��J0��ܵ����A�ƦC�ܦh�]�t80�Ӿ��)�A����AŪ�J�@�Ӿ�ơA�{���i�H��X�Ӿ�ƥX�{�b�ƦC�������ơC

=== �d�Ұ��浲�G(1) ===
1 3 5 3 1 0 <- ��J�ƦC
3 <- ��J���
2

=== �d�Ұ��浲�G(2) ===
55 66 55 66 0 <- ��J�ƦC
55 <- ��J���
2
*/
#include<stdio.h>

int main(void)
{
	int i,n,s[80],end,a=0,k;
	
	for(i=0;i<80;i++)
	{
		scanf("%d",&s[i]);
		if(s[i]==0)
		{
			break;	
		}	
	}
	end=i;
	scanf("%d",&n);
	for(k=0;k<end;k++)
	{
		if(n==s[k])
		{
			a++;	
		}	
	}	
	printf("%d",a);
	return 0;
}
