//����������������9��������a��n��Ҫ���д������a+aa+aaa++?+aa?a��n��a��֮�͡�
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,j;
    double num=0,sum=0;
    scanf("%d %d",&a,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            num=num+a*pow(10,j-1);
        }
        sum=sum+num;
        num=0;
    }
    printf("s = %.0f",sum);
    return 0;
}
 
