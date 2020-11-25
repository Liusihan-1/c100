#include <stdio.h>
#define N 9//此为一个宏定义，是比较方便的写法，也更简单 
#define M 9
int main()
{
    int i,j,min,max,a[M][N],k;//max是纵向的最大值，min是横向的最小值 
    int col=0,row=0;//两个变量接收鞍点的横纵坐标 
    for(i=0;i<M;i++)//此处为输入一个数组 
    {
    	for(j=0;j<N;j++)
    	{
    		scanf("%d",&a[i][j]);
	    } 
   }
    for(i=0;i<M;i++)
    {
    	max=a[0][i];//每一行第一个数 
    	for(j=0;j<N;j++)
    	{
    		if(a[i][j]>max)//寻找每行最大值 
    		{
    			max=a[i][j];
    			col=j;
			}
		}
	
	min=a[0][col];//col是上一行特定找到的最大值的地方，若找到了row则此处是鞍点
	for(k=0;k<N;k++) 
	{	if(a[k][col]<min)//找到每列的最小值 
		{
		 min=a[k][col];
		 row=k;
		} 
    }
    //先找到每行元素最大的元素然后判断是否是列上最小的元素即可 
    //如果找到马鞍点，此时已将所有马鞍点全部输出
	if(min==max)
	{   
		printf("您好，您需要的鞍点位置为%d%d您要找的数是%d",row+1,col+1,min);
		break;
	}
   }
   //如果没有找到马鞍点，输出NONE 
   if(min!=max) 
   printf("NONE"); 
 return 0;
}
 
