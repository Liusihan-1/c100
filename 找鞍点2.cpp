//ÿһ�б����Ƚϣ�
//���ҳ����Ԫ���±긳ֵ��index
//����һ�����ı���flag�ж�
//��index�����б����Ƚ�
//һ�������ϣ���flag���б仯
//��ÿһ�δ�forѭ����������if�ж�
//���������printf��return��ֱ��������NONE��
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

