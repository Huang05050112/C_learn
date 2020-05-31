/*沒寫完 
程式名稱:PS080312.c (請以程式名稱上傳)

設計一個函數，讀入一個整數(1..80)，畫出如執行結果的星號三角形。 
(程式碼不得使用for, while, goto等敘述) 

=== 主程式(不得變更) === 
int main(void) 
{ 
    int n; 
     
    scanf("%d",&n); 
    afunc(n); 
     
    return 0; 
} 


=== 範例執行結果(1) === 
5 <- 輸入5[Enter] 
***** 
**** 
*** 
** 
* 

=== 範例執行結果(2) === 
6 <- 輸入6[Enter] 
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

