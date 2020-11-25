//×Ö·û´®ÄæĞò

#include<stdio.h>   //µ÷ÓÃgetchar()
#include<string.h>
#define N 80
 
int main()
{
	int i, cnt = 0;
	char c;
	char string[N] = {0};
	c = getchar();
	for (i = 0; c != '\n'; i++)
	{
		string[i] = c;
		cnt++;
		c = getchar();
	}
	for (i = 0; i < cnt/2; i++)
	{
		char temp;
		temp = string[i];
		string[i] = string[cnt - i - 1];
		string[cnt - i - 1] = temp;
	}
	for (i = 0; i < cnt; i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
 
	return 0;
} 
