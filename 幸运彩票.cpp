//��Ʊ�ĺ����� 6 λ���֣���һ�Ų�Ʊ��ǰ 3 λ�ϵ���֮�͵��ں� 3 λ�ϵ���֮�ͣ�������Ų�Ʊ�����˵ġ�
//����������жϸ����Ĳ�Ʊ�ǲ������˵ġ�
//�����ʽ��
//�����ڵ�һ���и���һ�������� N���� 100������� N �У�ÿ�и���һ�Ų�Ʊ�� 6 λ���֡�
//�����ʽ��
//��ÿ�Ų�Ʊ������������˵ģ�����һ������� You are lucky!��������� Wish you good luck.��
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
