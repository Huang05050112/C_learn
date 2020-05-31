/*沒寫完 
PS090443

設計一個程式，該程式會讀入一個數字字串，並將字串轉換成整數。

=== 主程式 ===
int main(void)
{	 	
	char a[80];
	int n;

	scanf("%s",a);
	printf("[%d]",afunc(a));
	
	return 0;
}

=== 範例執行結果(1) ===
10 <- 輸入
[10]

=== 範例執行結果(2) ===
1234 <- 輸入
[1234]
*/
#include<stdio.h>

int afunc(char a[]);

int main(void) 
{          
    char a[80]; 
    int n; 

    scanf("%s",a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 

int afunc(char a[])
{
	int i,k[80],j;
	for(i=0;a[i]!=0;i++)
	{
		j+=a[i]-'0';
	}
	return j;
}
