//每一行遍历比较，
//并找出最大元素下标赋值给index
//再用一个旗帜变量flag判断
//用index进行列遍历比较
//一旦不符合，对flag进行变化
//在每一次大for循环的最后加上if判断
//如果符合则printf并return，直到最后输出NONE。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i=0,j,index=0,flag=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		index=0;
		for(j=0;j<n;j++)
			if(a[i][index]<=a[i][j])
				index=j;
		for(j=0;j<n;j++)
			if(a[i][index]>a[j][index])
				flag=1;
		if(flag==0)
		{
			printf("%d %d",i,index);
			return 0;
		}
		flag=0;
	}
	printf("NONE");
	return 0;
}

