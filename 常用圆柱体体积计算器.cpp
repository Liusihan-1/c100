//本题要求实现一个常用圆形体体积的计算器。
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,num;
	double pi=3.1415926535,r,h;/*题目不难但是有一个坑，就是这个π的值一定要精确到小数后10位，要不然只是16分一直有一个测试点错误，（我就被坑好好久！）*/
	while(1){
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d",&num);
		switch(num){
			case 1:{
				printf("Please enter the radius:\n");
				scanf("%lf",&r);
				printf("%.2lf\n",4.0/3*pi*pow(r,3));
				break;
			}
			case 2:{
				printf("Please enter the radius and the height:\n");
				scanf("%lf %lf",&r,&h);
				printf("%.2lf\n",pi*pow(r,2)*h);
				break;
			}
			case 3:{
				printf("Please enter the radius and the height:\n");
				scanf("%lf %lf",&r,&h);
				printf("%.2lf\n",1.0/3*pi*pow(r,2)*h);
				break;
			}
			default:return 0;
		}
	}
	return 0;
} 
