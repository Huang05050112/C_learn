/*�S�g�� 
�{���W��:PS080312.c (�ХH�{���W�٤W��)

�]�p�@�Ө�ơAŪ�J�@�Ӿ��(1..80)�A�e�X�p���浲�G���P���T���ΡC 
(�{���X���o�ϥ�for, while, goto���ԭz) 

=== �D�{��(���o�ܧ�) === 
int main(void) 
{ 
    int n; 
     
    scanf("%d",&n); 
    afunc(n); 
     
    return 0; 
} 


=== �d�Ұ��浲�G(1) === 
5 <- ��J5[Enter] 
***** 
**** 
*** 
** 
* 

=== �d�Ұ��浲�G(2) === 
6 <- ��J6[Enter] 
****** 
***** 
**** 
*** 
** 
*

*/
#include<stdio.h>

void afunc(int n1);
void bfunc(int n1);

int main(void) 
{ 
    int n; 
     
    scanf("%d",&n); 
    afunc(n); 
     
    return 0; 
}

void afunc(int n1)
{
	afunc(n1-1);
	bfunc(n1);
	
	return;
}

void bfunc(int n1)
{
	if(n1==1)
	{
		printf("*");
	}
	else
	{
		afunc(n1-1);
		printf("*",n1);
	}
	return;
	
}

