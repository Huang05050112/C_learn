/*
PS090106
 
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過80個正整數)，之後將所輸入的數字反序顯示在畫面上。

=== 範例執行結果(1) ===
1 3 5 0 <- 輸入
5 3 1

=== 範例執行結果(2) ===
55 44 33 22 11 0 <- 輸入
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
