int CountWord(FILE *f)
{
    char string[100];
    int i,num=0,word=0;
    char c;
    while (fgets(string,100,f))
    {
        for (i=0;(c=string[i])!='\0';i++)
        {
            if (c==' '||c=='\n'||c=='\'')
            {
                word = 0;
            }
            else if (word==0)
            {
                word = 1;
                num++;
            }
        }
    }
    fclose(f);
    return num;
}
