/*
PS080307
 
設計一個遞迴函數afunc(n1)，該函數可以計算出1累加到n1的結果。
(不得使用 for, while, goto 等敘述)

=== 主程式(不得變更) ===
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",afunc(n1));
    
    return 0;
}

=== 範例執行結果(1) ===
3 <- 輸入3[Enter]
6


=== 範例執行結果(2) ===
5 <- 輸入5[Enter]
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
