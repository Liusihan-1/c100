#include<stdio.h>
#define MAXN 80

int main()
{

    int i,len=0,index=-1;
    char a,ch,str[MAXN];

    scanf("%c\n",&a);

    ch=getchar();
    for(i=0;ch!='\n';i++){

        str[i]=ch;
        len++;
        ch=getchar();

    }

    for(i=0;i<len;i++){

        if(a==str[i]) index=i;
    }

    if(index!=-1) printf("index = %d",index);
    else printf("Not Found");

    return 0;

}
