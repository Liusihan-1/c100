#include<stdio.h>
main()
{
	char c;
	int letters=0,spaces=0,digits=0,others=0;
	printf("������һ���ַ�:\n");
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
	printf("��ĸ��%d�����ո���%d����������%d���������ַ���%d��\n",letters,spaces,digits,others);
	return 0;
}
