/*
PS090106
 
�]�p�@�ӵ{���A�ӵ{���i�H�s��Ū�J�����(��J0��ܵ����A�ܦh���W�L80�ӥ����)�A����N�ҿ�J���Ʀr�ϧ���ܦb�e���W�C

=== �d�Ұ��浲�G(1) ===
1 3 5 0 <- ��J
5 3 1

=== �d�Ұ��浲�G(2) ===
55 44 33 22 11 0 <- ��J
11 22 33 44 55
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
	for(k=end-1;k>=0;k--)
	{
		printf("%d ",s[k]);	
	}
}
