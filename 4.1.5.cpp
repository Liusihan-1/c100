//��������
#include <stdio.h>
int main()
{
	int a[10][10];
	int n;
	int x=0,y=0;//����
	int k=1;//��������
	scanf("%d",&n);
	int wall0=n-1,wall1=n-1,wall2=0,wall3=1;//���䴦�� 
	int direction=0;//�������� 0Ϊ�ң�1Ϊ�£�2Ϊ��3Ϊ�� 
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
		}//ʵ���ҵ��� 
		if(direction==1)
		{
			a[x++][y]=k++;
			if(x==wall1)
			{
				direction=2;
				wall1--; 
			}
		}//ʵ���µ��� 
		if(direction==2)
		{
			a[x][y--]=k++;
			if(y==wall2)
			{
				direction=3;
				wall2++;
			}
		}//ʵ������ 
		if(direction==3)
		{
			a[x--][y]=k++;
			if(x==wall3)
			{
				direction=0;
				wall3++;
			}
		}//ʵ���ϵ��� 
	 } 
	 for(int i=0;i<n;i++)
	 {
        for(int j=0;j<n;j++)
	 	{
	 		printf("%3d",a[i][j]);
		 }
		 printf("\n");
	 }//ѭ����� 
	
	return 0;
}
 
