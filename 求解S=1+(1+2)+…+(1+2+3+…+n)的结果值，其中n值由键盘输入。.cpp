//求解S=1+(1+2)+…+(1+2+3+…+n)的结果值，其中n值由键盘输入。
#include<stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	if(n<=0)
	
	{
		printf("Error!");
	}
    else{

		int a=0;
		for(i=1;i<=n;i++)
		{
		a=a+i;
		 s=s+a; 
		} 
		 printf("%d",s);
	}
return 0;
} 
