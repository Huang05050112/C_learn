/*
PS090433

設計一個函數afunc(a,b,c)，該函數會將字串a與字串b逐字合併後建立成字串c(假設字串a和b長度一致)。

=== 主程式 ===
int main(void)
{
	char a[80],b[80],c[80];
	
	gets(a);
	gets(b);
	afunc(a,b,c);
	printf("[%s]",c);
	
	return 0;
}

=== 範例執行結果(1) ===
123 <- 輸入
ABC <- 輸入
[1A2B3C]

=== 範例執行結果(2) ===
ABCDEF <- 輸入
abcdef <- 輸入
[AaBbCcDdEeFf]

=== 範例執行結果(3) ===
This is a cat. <- 輸入字串
That is a dog. <- 輸入字串
[TThhiast  iiss  aa  cdaotg..]
*/
#include<stdio.h>

void afunc(char a[],char b[],char c[]);

int main(void) 
{ 
    char a[80],b[80],c[80]; 
     
    gets(a); 
    gets(b); 
    afunc(a,b,c); 
    printf("[%s]",c); 
     
    return 0; 
} 

void afunc(char a[],char b[],char c[])
{
	int i,j=0,k=0;
	for(i=0;b[k]!=0;i++)
	{
		if(i%2==0)
		{
			c[i]=a[j++];
		}
		else
		{
			c[i]=b[k++];
		}
	}
	/*老師的 
	for(i=0;a[i]!=0;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	*/
	c[i]=0;
	
}
