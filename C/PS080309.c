/*
PS080309
 
設計一個遞迴函數afunc(n1)，該函數可以計算出費氏數列(Fibonacci sequence)的結果。
已知 f(0)=0, f(1)=1, 且當n>1時 f(n)=f(n-1)+f(n-2)。
(不得使用 for, while, goto 等敘述)

=== 主程式(不得變更) ===
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",f(n1));
    
    return 0;
}

=== 範例執行結果(1) ===
6 <- 輸入6[Enter]
8


=== 範例執行結果(2) ===
10 <- 輸入10[Enter]
55

*/
//沒寫完 
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
