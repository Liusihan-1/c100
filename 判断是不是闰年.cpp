#include<stdio.h>

int main()
{
    int a,year;
    printf("请输入一个年份:\n");
    scanf("%d,&year");
    if(year%400==0) 
    a=1;
    else
    {
		if(year%4==0&&year%100!=0)
    	a=1;
        else
        a=0;
    }
    if(a==1)
    printf("%d\n不是闰年",year); 
    else
    printf("%d\n是闰年",year); 
    return 0;
}
	 
