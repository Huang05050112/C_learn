/*
PS080309
 
�]�p�@�ӻ��j���afunc(n1)�A�Ө�ƥi�H�p��X�O��ƦC(Fibonacci sequence)�����G�C
�w�� f(0)=0, f(1)=1, �B��n>1�� f(n)=f(n-1)+f(n-2)�C
(���o�ϥ� for, while, goto ���ԭz)

=== �D�{��(���o�ܧ�) ===
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",f(n1));
    
    return 0;
}

=== �d�Ұ��浲�G(1) ===
6 <- ��J6[Enter]
8


=== �d�Ұ��浲�G(2) ===
10 <- ��J10[Enter]
55

*/
//�S�g�� 
#include<stdio.h>

int f(int n1); 

int main(void) 
{ 
    int n1; 
     
    scanf("%d",&n1); 
    printf("%d",f(n1)); 
     
    return 0; 
} 

int f(int n1)
{
	int k;
	if(n1<=1)
	{
		return n1;
	}
	else
	{	
		return f(n1-1)+f(n1-2);	
	}
}
