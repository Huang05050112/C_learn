/*沒寫完 
PS090424

設計一個函數afunc(a,m,n,b)，該函數會將字串a自位置m開始起，連續n個字元的部分字串，建立成字串b。
假設m不超過a字串長度，否則b字串為空字串。
假設m+n超過a字串長度，則複製至a字串結尾。

=== 主程式 ===
int main(void)
{
	char a[80],b[80];
	int m,n;
	
	scanf("%s",a);
	scanf("%d%d",&m,&n);
	afunc(a,m,n,b);
	printf("[%s]",b);
	
	return 0;
}

=== 範例執行結果(1) ===
12345 <- 輸入
2 <- 輸入
2 <- 輸入
[34]

=== 範例執行結果(2) ===
123456 <- 輸入
6 <- 輸入
2 <- 輸入
[]

=== 範例執行結果(3) ===
ABC <- 輸入
1 <- 輸入
3 <- 輸入
[BC]
*/
#include<stdio.h>

void afunc(char a[],int m,int n,char b[]);

int main(void) 
{ 
    char a[80],b[80]; 
    int m,n; 
     
    scanf("%s",a); 
    scanf("%d%d",&m,&n); 
    afunc(a,m,n,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

void afunc(char a[],int m,int n,char b[])
{
	int i,j;
	for(j=0;a[j]!=0;j++)
	{
		;
	}
	for(i=0;a[i]!=0;i+)
	{
		if(m>j)
		{
			b[0]=0;
		}
		else if((m+n)>j)
		{
			b[i]=a[m]
		}
		else
		{
			
		}
	}
	b[i]=0;
}
