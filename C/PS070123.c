//
/*
PS070123

�q��LŪ�J1�ӥ���ơA��X�ӼƦr�ϧǱƦC�᪺�Ʀr�A�p��X��̬ۥ[�����G�C�C

=== �d�Ұ��浲�G(1) ===
1234 <-- �q��L��J1234[Enter]
1234+4321=5555

=== �d�Ұ��浲�G(2) ===
10 <-- �q��L��J10[Enter]
10+1=11
*/ 
#include<stdio.h>
int main(void)
{
	int n,n1,j=1,i,k;
	scanf("%d",&n);
	k=n;
	for(j=1;n>0;j*=10)
	{
		n1=(n%10)*j;
		//j*=10;
		n/=10;
	}
	printf("%d+%d=%d",k,n1,k+n1);
	
	return 0;
 } 
