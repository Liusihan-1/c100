void WriteArticle(FILE *f)
{
	char ch;
	ch=getchar();		//���뵽����
	while(ch!=EOF)
	{
		fputc(ch,f);	//���浽�ļ�
		ch=getchar();
	}
}

