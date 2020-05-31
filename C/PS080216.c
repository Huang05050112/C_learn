/*
PS080216

設計一個函數，該函數會讀入一個10進位正整數，轉換成2進位數字，並傳回2進位數字的長度。
 
===主程式(不得變更)===
int main(void)
{
	int n;
	
	scanf("%d",&n);
	printf("[%d]",afunc(n));
	
	return 0;
} 


=== 範例執行結果(1) ===
10 <- 輸入10
[4]

=== 範例執行結果(2) ===
10000 <- 輸入10000
[14]
*/
#include<stdio.h>

int afunc(int n);

int main(void) 
{ 
    int n; 
     
    scanf("%d",&n); 
    printf("[%d]",afunc(n)); 
     
    return 0; 
}

int afunc(int n)
{
	int i,k=0,n1;
	while(1)
	{
		n=n/2;
		i++;
		if(n==0)
		{
			break;
		}
	}
	return i;
}
