/*(SLJ-Looping-005) 平均成績 : 輸入:人數以及每個學生的分數輸出:全班平均成績(至小數第2位) 
例: 7 65 39 54 88 91 74 63 67.71
*/
#include<stdio.h>
int main(void)
{
	float n,s=0;
	int i,n1;
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n1);
		s=s+n1;
	}
	
	s=s/n;
	printf("%.2f",s);
	
}
