#include <stdio.h>
void fun(void)
{
	char c;
	if ((c = getchar()) != '\n')  //��ջ����
	{
		fun();
	}
	if (c != '\n')  //��ջ
	{
		printf("%c", c);
	}
}
 
int main()
{
	printf("������5���ַ�\n");
	fun();
	return 0;
}

