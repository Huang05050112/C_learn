/*
PS090304

設計一個函數，該函數會讀入一個整數陣列(結尾為0)，並將該陣列反序印出。

===主程式===
int main(void)
{
    int a[80],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
    {
        scanf("%d",&a[++i]);
    }
	afunc(a);
    
    return 0;
}

=== 範例執行結果(1) ===
4 3 2 1 0 <- 輸入4 3 2 1 0
1 2 3 4

=== 範例執行結果(2) ===
10 20 30 40 50 60 70 80 90 0 <- 輸入10 20 30 40 50 60 70 80 90 0
90 80 70 60 50 40 30 20 10
*/
#include<stdio.h>

int afunc(int a[]);

int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
    { 
        scanf("%d",&a[++i]); 
    } 
    afunc(a); 
     
    return 0; 
}

int afunc(int a[])
{
	int i,j,k=0,b=0;
	for(j=0;;j++)
	{
		if(a[j]==0)
		{
			break;
		}
		b++;	
	}
	for(i=b-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
 } 
