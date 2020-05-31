//
/*
程式名稱:PS070108.c (請以程式名稱上傳)

讀入正整數N和M，在畫面上顯示1到N，所有M的倍數的數列，數字間以空白間格。 
  
=== 範例執行結果(1) === 
5 2 <-- 從鍵盤輸入5 2[Enter] 
2 4 
  
=== 範例執行結果(2) === 
10 3 <-- 從鍵盤輸入10 3[Enter] 
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
