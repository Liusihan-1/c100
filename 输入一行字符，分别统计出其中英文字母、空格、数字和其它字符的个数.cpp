#include<stdio.h>
main()
{
	char c;
	int letters=0,spaces=0,digits=0,others=0;
	printf("请输入一行字符:\n");
	scanf("%c",&c);
	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letters++;
		else if(c==' ')
			spaces++;
		else if(c>='0'&&c<='9')
			digits++;
		else
			others++;
	}
	printf("字母有%d个，空格有%d个，数字有%d个，其他字符有%d个\n",letters,spaces,digits,others);
	return 0;
}
