/*
PS090302

�U�C�{���i�H�s��Ū�J�����(��J0��ܵ����A���]�ܦh��J���W�L60�ӥ����)�A����C�L�X�ҿ�J����ƪ��ӼơC
�]�p�@�Ө�ơA�p��X��ư}�C����ƪ��Ӽ�(���0��ܰ}�C����)�C

===�D�{��(���o�ܧ�)===
int main(void)
{
    int a[81],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

	printf("[%d]\n",afunc(a));
    
    return 0;
}

=== �d�Ұ��浲�G(1) ===
1 3 5 0 <- ��J
[3]

=== �d�Ұ��浲�G(2) ===
55 44 33 22 11 0 <- ��J
[5]
*/
#include<stdio.h>

int afunc(int a[]);

int main(void) 
{ 
    int a[81],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d]\n",afunc(a)); 
     
    return 0; 
} 

int afunc(int a[])
{
	int j,b=0;
	for(j=0;;j++)
	{
	
		if(a[j]==0)
		{
			break;
		}
		b++;	
	}
	return b;
}
