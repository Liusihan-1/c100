#include<stdio.h>
#include<ctype.h>
main()
{
	char letter;
	printf("������ĳһ��ĵ�һ����ĸ:(S/F/M/T/W)\n");
	scanf("%c",&letter);
	letter=toupper(letter);
	getchar();
	switch(letter)
	{
		case 'S':
			printf("������ڶ�����ĸ��(a/u)");
			if ((letter=getchar())=='a')
				printf("������(Saturday)\n");
			else if ((letter=getchar())=='u')
				printf("������(Sunday)\n");
			else
				printf("�������\n");
			break;
		case 'F':printf("������(Friday)\n");break;
		case 'M':printf("����һ(Monday)\n");break;
		case 'T':
			printf("������ڶ�����ĸ:(u/h)");
			if((letter=getchar())=='u')
				printf("���ڶ�(Tuesday)\n");
			else if((letter=getchar())=='h') 
				printf("������(Thursday)\n");
			else
				printf("�������!");
			break;
		case 'W':printf("������(Wedensday)\n");break;
		default:printf("�������!");
	}
} 
