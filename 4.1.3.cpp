//«√±ø÷”
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char w[105];
    scanf("%d",&n);
    getchar();
    int i,j;
    while(n--)
    {
        gets(w);
        int len=strlen(w);
        int m1=0,m2=0,r=0;
        if(w[len-2]=='g'&&w[len-3]=='n'&&w[len-4]=='o')
            m2=1;
        for(i=0; i<len; ++i)
        {
            if(w[i]==',')
            {
                if(w[i-1]=='g'&&w[i-2]=='n'&&w[i-3]=='o')
                    m1=1;
            }
            if(w[i]==' ')
                r++;//µ•¥  ˝
        }
        if(m1==1&&m2==1)
        {
            for(int i=0;r>2;++i)
            {
                if(w[i]==' ')
                    r--;
                printf("%c",w[i]);
            }
            printf("qiao ben zhong.\n");
        }
        else
            printf("Skipped\n");
    }
}

 
