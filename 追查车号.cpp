//一辆卡车违反交通规则，撞人逃逸。
//现场三人目击事件，但都没有记住车号，只记下车的一些特征。
//甲说：牌照的前两位数字是相同的；
//乙说：牌照的后两位数字是相同的；
//丙是位数学家，他说：四位的车号正好是一个整数的平方。
//请根据以上线索求出车号。
#include<stdio.h>
int main()
{
    int i,j,k,number;
    for(i=1;i<=9;i++)
        for(j=0;j<=9;j++)
        {
            number = 1000*i + 100*i + j*10 + j;
            for(k=31;k<=99;k++)
                if(k*k == number)
                {
                    printf("The number is %d.",number);
                } 
        } 
return 0;
}

