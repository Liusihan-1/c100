#include<stdio.h>
struct student{
	char num[6];
	char name[10];
	int math;
	int english;
	int chinese;	
}a[11];
int main()
{
	int n;
	scanf("%d",&n);
	int score[n];
	int max=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d %d %d",a[i].num,a[i].name,&a[i].math,&a[i].english,&a[i].chinese);
		   score[i]=(a[i].math+a[i].english+a[i].chinese);
		   if(score[i]>score[max])
		   {
		   	max=i;
		   }
		   
		}
		printf("%s %s %d\n",a[max].name,a[max].num,score[max]);	
 } 


