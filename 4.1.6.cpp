//���ڴ�����
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    int i,j;
    char a[21];
    double b[22][22];
    /*���ڶ�����b�Ǳ�����飬�ұ�����������������У�
    ���������ڵ����ڱ�Ե����ʱ������Խ������*/
    memset(b,0,sizeof(b));
    //�ȳ�ʼ��Ϊ��0����������һֻ����Ҳû�У�
    scanf("%d%d",&m,&n);
    for(i=0; i<m; i++)
    {
        scanf("%s",a);
        //��Ϊÿһ�ж���û�пո������һ���ַ�������ÿһ�п��Կ���һ���ַ�����
        for(j=0; j<n; j++)
        {
            if(a[j]=='#')
            //������ַ�������������ӣ�������Ӧλ�ñ�ǳɡ�2����
                b[i+1][j+1] = 2;
        }
    }
    int k,a1,a2;
    scanf("%d",&k);
    while(k--)
    {
        int count=0;
        scanf("%d%d",&a1,&a2);
        //�������꣬��Ϊ���ڶ���b����ʱ����������У���������a1��a2�������1����
        if(b[a1+1][a2+1]>0)
        /*�����ڵ����еĸ��ӣ���������һ�£�
        �������������л��ŵ����ӣ������п���Ϊ��1����2������ֱ�Ӽ��������ӡ�1����*/
        {
            count++;
            b[a1+1][a2+1]=0;
            //�����������������������㣬�����������û�������ˣ�����ͬ����
        }

        if(b[a1][a2+1]>0)
        {
            b[a1][a2+1]=b[a1][a2+1]-1;
            /*��Ϊb�������������У���ʹ�ڵ����ڵڡ�0���У���0�������������ȫ��Ϊ��0����
            ���Բ���Ҫ�ж��Ƿ��Ǳ�Ե����*/
            if( b[a1][a2+1]==0)
            {
                count++;
                b[a1][a2+1]=0;
            }

        }

        if(b[a1+1][a2]>0)
        {
            b[a1+1][a2]=b[a1+1][a2]-1;
            if(b[a1+1][a2]==0)
            {
                count++;
                b[a1+1][a2]=0;
            }

        }

        if(b[a1+1][a2+2]>0)
        {
            b[a1+1][a2+2]=b[a1+1][a2+2]-1;
            if(b[a1+1][a2+2]==0)
            {
                count++;
                b[a1+1][a2+2]=0;
            }

        }

        if(b[a1+2][a2+1]>0)
        {
            b[a1+2][a2+1]=b[a1+2][a2+1]-1;
            if( b[a1+2][a2+1]==0)
            {
                count++;
               b[a1+2][a2+1] = 0;
            }
        }
        printf("%d\n",count);


    }

    return 0;
}
 