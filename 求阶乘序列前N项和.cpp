//本题要求编写程序，计算序列 1!+2!+3!+? 的前N项之和。

#include <stdio.h>
 
int fact(int n)
{
	int result = 1;
	for(int i=1;i<=n;i++)
	{
		result *= i;
	 } 
	 return result;
}
 
int main(int argc,char const *argv[])
{
	int N,sum;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		sum += fact(i);
	}
	printf("%d\n",sum);
	return 0;
}

