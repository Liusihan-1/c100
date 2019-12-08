#include<stdio.h>
typedef struct
{
	int ID;
	float math;
	float english;
	float chinese;
	float aver;
	char name[20];
}Stu;
int main()
{
	int i; 
	float all,allaver;
	Stu stu[5];
	float aver=0;
	printf("请输入5个同学的信息：学生号，姓名，3门成绩:\n");
	for(i=0;i<5;i++)
    {
        scanf("%d %s %f %f %f",&(stu[i].ID),stu[i].name,&(stu[i].math),&(stu[i].english),&(stu[i].chinese));
        stu[i].aver=(stu[i].math+stu[i].english+stu[i].chinese)/3;
        all+=stu[i].aver; 
	}
	allaver=all/5;
	for(i=0;i<5;i++)
        printf("第%d名同学的平均成绩为%f\n：",i,stu[i].aver);
        printf("总平均成绩为%f\n",allaver);
}
