//螺旋方阵
#include <stdio.h>
int main()
{
	int a[10][10];
	int n;
	int x=0,y=0;//坐标
	int k=1;//递增数字
	scanf("%d",&n);
	int wall0=n-1,wall1=n-1,wall2=0,wall3=1;//拐弯处的 
	int direction=0;//数字走向 0为右，1为下，2为左，3为上 
	while(k<=n*n)
	{
		if(direction==0)
		{
			a[x][y++]=k++;
			if(y==wall0)
			{
				direction=1;
				wall0--;
			}
		}//实现右到下 
		if(direction==1)
		{
			a[x++][y]=k++;
			if(x==wall1)
			{
				direction=2;
				wall1--; 
			}
		}//实现下到左 
		if(direction==2)
		{
			a[x][y--]=k++;
			if(y==wall2)
			{
				direction=3;
				wall2++;
			}
		}//实现左到上 
		if(direction==3)
		{
			a[x--][y]=k++;
			if(x==wall3)
			{
				direction=0;
				wall3++;
			}
		}//实现上到右 
	 } 
	 for(int i=0;i<n;i++)
	 {
        for(int j=0;j<n;j++)
	 	{
	 		printf("%3d",a[i][j]);
		 }
		 printf("\n");
	 }//循环输出 
	
	return 0;
}
 
