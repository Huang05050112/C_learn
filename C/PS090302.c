/*
PS090302

下列程式可以連續讀入正整數(輸入0表示結束，假設至多輸入不超過60個正整數)，之後列印出所輸入正整數的個數。
設計一個函數，計算出整數陣列中整數的個數(整數0表示陣列結尾)。

===主程式(不得變更)===
int main(void)
{
    int a[81],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

	printf("[%d]\n",afunc(a));
    
    return 0;
}

=== 範例執行結果(1) ===
1 3 5 0 <- 輸入
[3]

=== 範例執行結果(2) ===
55 44 33 22 11 0 <- 輸入
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
