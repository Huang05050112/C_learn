/*	
PS070903

�{���ݹF���H�U�n�D:
�q��L�s��Ū�J���(��J0��ܵ���)�A��X�ҿ�J��ƪ��̤j�Ʀr(���]�t0)�C

�{�������ŦX�U�C�n�D�G
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�ΦҸդ��������
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G


=== �d�Ұ��浲�G(1) ===
55
101
66
-2
0 <-- �q��L��J55[Enter]101[Enter]66[Enter]-2[Enter]0[Enter]
MAX=101

=== �d�Ұ��浲�G(2) ===
-1
-101
-2
0 <-- �q��L��J-1[Enter]-101[Enter]-2[Enter]0[Enter]
MAX=-1

=== �d�Ұ��浲�G(3) ===
-101
-202
-303
-404
0 <-- �q��L��J-101[Enter]-202[Enter]-303[Enter]-404[Enter]0[Enter]
MAX=-101
PS
*/
#include<stdio.h>
int main(void)
{
	
	int n1,n2,n3,n,n4,i,j;
	scanf("%d",&n);
	n=n1;
	for(;;)
	{
		scanf("%d",&n2);
		if(n2==0)
		{
			break;
		}
		if(n2>n)
		{
			n=n2;
		}
	}
	
	printf("MAX=%d",n);
	
	
	
	return 0;
 } 
