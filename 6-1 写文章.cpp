void WriteArticle(FILE *f)
{
	char ch;
	ch=getchar();		//输入到程序
	while(ch!=EOF)
	{
		fputc(ch,f);	//储存到文件
		ch=getchar();
	}
}

