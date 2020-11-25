//µ¹Ö±½ÇÈý½ÇÐÎ
#include<stdio.h>
int main()
{
	int i,j,n;
	char a=' ',b='*';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(int j=i;j;j--)
		
		{
			printf("%c",a);
			
		}
		for(j=n;j>i;j--) {
			printf("%c",b);
			
		}
		printf("\n");
	 } 
	 return 0;
 } 
