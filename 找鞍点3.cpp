#include <stdio.h>
#define N 9//��Ϊһ���궨�壬�ǱȽϷ����д����Ҳ���� 
#define M 9
int main()
{
    int i,j,min,max,a[M][N],k;//max����������ֵ��min�Ǻ������Сֵ 
    int col=0,row=0;//�����������հ���ĺ������� 
    for(i=0;i<M;i++)//�˴�Ϊ����һ������ 
    {
    	for(j=0;j<N;j++)
    	{
    		scanf("%d",&a[i][j]);
	    } 
   }
    for(i=0;i<M;i++)
    {
    	max=a[0][i];//ÿһ�е�һ���� 
    	for(j=0;j<N;j++)
    	{
    		if(a[i][j]>max)//Ѱ��ÿ�����ֵ 
    		{
    			max=a[i][j];
    			col=j;
			}
		}
	
	min=a[0][col];//col����һ���ض��ҵ������ֵ�ĵط������ҵ���row��˴��ǰ���
	for(k=0;k<N;k++) 
	{	if(a[k][col]<min)//�ҵ�ÿ�е���Сֵ 
		{
		 min=a[k][col];
		 row=k;
		} 
    }
    //���ҵ�ÿ��Ԫ������Ԫ��Ȼ���ж��Ƿ���������С��Ԫ�ؼ��� 
    //����ҵ����㣬��ʱ�ѽ���������ȫ�����
	if(min==max)
	{   
		printf("���ã�����Ҫ�İ���λ��Ϊ%d%d��Ҫ�ҵ�����%d",row+1,col+1,min);
		break;
	}
   }
   //���û���ҵ����㣬���NONE 
   if(min!=max) 
   printf("NONE"); 
 return 0;
}
 
