//����Ҫ���д���򣬼������� 1!+2!+3!+? ��ǰN��֮�͡�

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

