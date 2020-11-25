void fileRW(FILE *fin, FILE *fout) {
    int row = 1;
    char line[1024];
    char str[1024];
    while (fgets(line, sizeof(line), fin)) {
        int i, j = 0;
        for (i = 0; line[i] != '\0'; i++)
            if((int)line[i]!=9)
                str[j++]=line[i];
        str[j]='\0';
        fprintf(fout, "%d:%s", row++, str);
    }
}

