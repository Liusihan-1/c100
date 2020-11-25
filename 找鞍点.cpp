#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int row;
	int col;
	int data;
} node;
int main(){
	node ad[50];
	int i=0,j=0,min,max,m,n,n1,q;
	int a[4][5]={5,8,6,7,3,
	          6,11,7,9,10,
			  4,3,7,8,2,
			  2,4,5,11,7   };
	q=0;//q为计数器
	for(i=0;i<4;i++)
	{
		min=a[i][0],n=0;
		for(j=1;j<5;j++)
		{
			
			if(a[i][j]<min)
			{

			min=a[i][j];
			n=j;//n代表当前行中最小的列数 
			}
			
		}
		max=a[i][n];
		for(m=0;m<4;m++)
		{
			if(a[m][n]>=max)
			{
				max=a[m][n];
				n1=m;//n1符合列中最大的行数 
			}
			
		}
		if(max==min)
		{
			
		ad[q].col=n;
		ad[q].row=n1;
		ad[q].data=max; 
		printf("鞍点行数为 %d 列数为%d 值为 %d \n",ad[q].row+1,ad[q].col+1,ad[q].data);
		q++;
		}		
	}	
	return 0;
}

