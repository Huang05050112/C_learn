/*
PS090441

設計一個程式，該程式會讀入一個10進位正整數，並將數字翻轉後轉換成字串。

=== 主程式 ===
int main(void)
{	 	
	int n;
	char a[80];

	scanf("%d",&n);
	afunc(n,a);
	printf("[%s]\n",a);
	
	return 0;
}

=== 範例執行結果(1) ===
10 <- 輸入
[01]

=== 範例執行結果(2) ===
1234 <- 輸入
[4321]
*/
#include<stdio.h>

void afunc(int n,char a[]);

int main(void) 
{          
    int n; 
    char a[80]; 

    scanf("%d",&n); 
    afunc(n,a); 
    printf("[%s]\n",a); 
     
    return 0; 
} 

void afunc(int n,char a[])
{
	int i;
	for(i=0;n!=0;i++)
	{
		a[i]=n%10 + '0';
		n/=10;
	}
	a[i]=0;
}
