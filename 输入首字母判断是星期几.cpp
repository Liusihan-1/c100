#include<stdio.h>
#include<ctype.h>
main()
{
	char letter;
	printf("请输入某一天的第一个字母:(S/F/M/T/W)\n");
	scanf("%c",&letter);
	letter=toupper(letter);
	getchar();
	switch(letter)
	{
		case 'S':
			printf("请输入第二个字母：(a/u)");
			if ((letter=getchar())=='a')
				printf("星期六(Saturday)\n");
			else if ((letter=getchar())=='u')
				printf("星期日(Sunday)\n");
			else
				printf("输入错误！\n");
			break;
		case 'F':printf("星期五(Friday)\n");break;
		case 'M':printf("星期一(Monday)\n");break;
		case 'T':
			printf("请输入第二个字母:(u/h)");
			if((letter=getchar())=='u')
				printf("星期二(Tuesday)\n");
			else if((letter=getchar())=='h') 
				printf("星期四(Thursday)\n");
			else
				printf("输入错误!");
			break;
		case 'W':printf("星期三(Wedensday)\n");break;
		default:printf("输入错误!");
	}
} 
