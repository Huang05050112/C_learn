/*
	
PS090431

設計一個函數afunc(a,b)，該函數會將字串a中的空白刪除後建立成字串b。

=== 主程式 ===
int main(void)
{
	char a[80],b[80];
	
	gets(a);
	afunc(a,b);
	printf("[%s]",b);
	
	return 0;
}

=== 範例執行結果(1) ===
A B C <- 輸入
[ABC]

=== 範例執行結果(2) ===
AB  CD    EF <- 輸入
[ABCDEF]

=== 範例執行結果(3) ===
This is a book. <- 輸入字串
[Thisisabook.]PS
*/
#include<stdio.h>

void afunc(char a[],char b[]);

int main(void) 
{ 
    char a[80],b[80]; 
     
    gets(a); 
    afunc(a,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

void afunc(char a[],char b[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			b[j++]=a[i];
		}
	}
	b[j]=0;
}
