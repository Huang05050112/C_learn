/*
PS090435

設計一個函數afunc(a)，該函數會將字串a中所有的數字字元加總。

=== 主程式 ===
int main(void)
{
	char a[80];
	
	gets(a);
	printf("[%d]",afunc(a));
	
	return 0;
}

=== 範例執行結果(1) ===
123 <- 輸入
[6]

=== 範例執行結果(2) ===
1a2B3c4D <- 輸入
[10]

=== 範例執行結果(3) ===
1010.1010 <- 輸入
[4]
*/
#include<stdio.h>

int afunc(char a[]);

int main(void) 
{ 
    char a[80]; 
     
    gets(a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 

int afunc(char a[])
{
	int i,k=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			k+=a[i]-'0';
		}
	}
	return k;
}
