//彩票的号码有 6 位数字，若一张彩票的前 3 位上的数之和等于后 3 位上的数之和，则称这张彩票是幸运的。
//本题就请你判断给定的彩票是不是幸运的。
//输入格式：
//输入在第一行中给出一个正整数 N（≤ 100）。随后 N 行，每行给出一张彩票的 6 位数字。
//输出格式：
//对每张彩票，如果它是幸运的，就在一行中输出 You are lucky!；否则输出 Wish you good luck.。
#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
while(i--)
{
getchar();
char temp[6];
scanf("%s",&temp);
if((temp[0]+temp[1]+temp[2]) == (temp[3]+temp[4]+temp[5]))
printf("You are lucky!\n");
else 
printf("Wish you good luck.\n");
}
return 0;
}
