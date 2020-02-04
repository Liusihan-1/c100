#include <stdio.h>
void fun(void)
{
	char c;
	if ((c = getchar()) != '\n')  //出栈条件
	{
		fun();
	}
	if (c != '\n')  //出栈
	{
		printf("%c", c);
	}
}
 
int main()
{
	printf("请输入5个字符\n");
	fun();
	return 0;
}

