#include<stdio.h>
int main()
{
    int n,count1=0,count2=0,k,x1,y1,x2,y2,i,j;
    char a[15][15];       //首先，这里就不要写成int了，写熟了很容易写错。
    scanf("%d\n",&n);
    n=2*n;     //如果这里不乘以2下面可以用2n,但这样简单些，以免下面容易将2写掉。
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%n==0) scanf("%c\n",&a[i][j]);  //不要就单纯地写scanf("%c",&a[i][j])，因为，你按照样例的格式输入会有空格和回车，
            else scanf("%c ",&a[i][j]);         //而空格和回车也算%c,也算字符！！所以！所以必须要严格输入！（这个错误我找了很久，原因就是对%c的运用不是滚瓜烂熟
        }
    }
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(a[x1][y1]==a[x2][y2]&&a[x1][y1]!='*'&&a[x2][y2]!='*')   //这里不要忘了a[x1][y1]!='*'&&a[x2][y2]!='*'这个条件；
        {
            a[x1][y1]='*';  
            a[x2][y2]='*';
            count1=count1+2;         
            if(count1==n*n)
            {
                printf("Congratulations!\n");
                break;                    //输出Congratulations!证明已经游戏成功，不需要再读取后面的了，所以要写break;  第一遍我就忘了写了，所以错了。
            }
            else
            {
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(j%n==0) printf("%c\n",a[i][j]);
                        else
                        printf("%c ",a[i][j]);
                    }
                }
            }
        }
        else
        {
            count2++;
			printf("Uh-oh\n");                              //这里，我刚开始是先把if（count2==3）...写在前面的，结果错了，因为仔细看题，是要将Uh-oh输出了三次之后再输出Game Over，否则最后一次的Uh-oh就打印不出来了.
            if(count2==3) { printf("Game Over\n"); break;}   //额，综上，这个题耗费了我一个小时！！！终于正确了，写得我都饿了！我真菜，，，哎，努力吧！
        }
    }
    return 0;
}

