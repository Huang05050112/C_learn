/*	
PS070903

程式需達成以下要求:
從鍵盤連續讀入整數(輸入0表示結束)，找出所輸入整數的最大數字(不包含0)。

程式必須符合下列要求：
1. 程式第一行必須加上含程式名稱,學號,姓名,及考試日期的註解
2. 程式之輸入及輸出結果必須符合範例執行結果


=== 範例執行結果(1) ===
55
101
66
-2
0 <-- 從鍵盤輸入55[Enter]101[Enter]66[Enter]-2[Enter]0[Enter]
MAX=101

=== 範例執行結果(2) ===
-1
-101
-2
0 <-- 從鍵盤輸入-1[Enter]-101[Enter]-2[Enter]0[Enter]
MAX=-1

=== 範例執行結果(3) ===
-101
-202
-303
-404
0 <-- 從鍵盤輸入-101[Enter]-202[Enter]-303[Enter]-404[Enter]0[Enter]
MAX=-101
PS
*/
#include<stdio.h>
int main(void)
{
	
	int n1,n2,n3,n,n4,i,j;
	scanf("%d",&n);
	n=n1;
	for(;;)
	{
		scanf("%d",&n2);
		if(n2==0)
		{
			break;
		}
		if(n2>n)
		{
			n=n2;
		}
	}
	
	printf("MAX=%d",n);
	
	
	
	return 0;
 } 
