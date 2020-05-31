/*
PS090321

設計一個函數，傳回陣列a的第1個元素，並將該元素刪除，且後續元素向前遞補(整數0表示陣列結尾)。

===主程式===
int main(void)
{
    int a[80],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

	printf("[%d] ", afunc(a));
	
	for (i=0;a[i]!=0;i++)
		printf("%d ",a[i]);
    
    return 0;
}

=== 範例執行結果(1) ===
4 3 2 1 0 <- 輸入4 3 2 1 0
[4] 3 2 1 

=== 範例執行結果(2) ===
11 55 33 55 44 55 0 <- 輸入11 55 33 55 44 55 0
[11] 55 33 55 44 55
*/
#include<stdio.h>
int afunc(int a[]);
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d] ", afunc(a)); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 


int afunc(int a[])
{
	int k,j,i;
	k=a[0];
	for(i=1;a[i]!=0;i++)
	{
		a[i-1]=a[i];
	}
	a[i-1]=0;
	
	return k;	
}
