/*
PS080307
 
�]�p�@�ӻ��j���afunc(n1)�A�Ө�ƥi�H�p��X1�֥[��n1�����G�C
(���o�ϥ� for, while, goto ���ԭz)

=== �D�{��(���o�ܧ�) ===
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",afunc(n1));
    
    return 0;
}

=== �d�Ұ��浲�G(1) ===
3 <- ��J3[Enter]
6


=== �d�Ұ��浲�G(2) ===
5 <- ��J5[Enter]
15 
*/

#include<stdio.h>

int afunc(int n1);

int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",afunc(n1));
    
    return 0;
}

int afunc(int n1)
{
	if(n1==1)
	{
		return n1;
	}
	
	return n1+afunc(n1-1) ;
}
