//
/*
�{���W��:PS070108.c (�ХH�{���W�٤W��)

Ū�J�����N�MM�A�b�e���W���1��N�A�Ҧ�M�����ƪ��ƦC�A�Ʀr���H�ťն���C 
  
=== �d�Ұ��浲�G(1) === 
5 2 <-- �q��L��J5 2[Enter] 
2 4 
  
=== �d�Ұ��浲�G(2) === 
10 3 <-- �q��L��J10 3[Enter] 
3 6 9 
*/
#include<stdio.h>
int main(void)
{
	int n,m,i,j=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(i%m == 0)
		{
			printf("%d ",i);
		}		
	}
	
	return 0;
 } 
