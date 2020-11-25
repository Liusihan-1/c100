//编写程序，实现A（x1,y1）和B（x2,y2）两点之间的距离D。
#include<stdio.h>
#include<math.h>
float dist(float x1,float y1,float x2,float y2)
{
    double dis;
        dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return dis;
}
 
int main()
{
    float x1,x2,y1,y2,D;
    scanf("%f,%f",&x1,&y1);
    scanf("%f,%f",&x2,&y2);
    D=dist(x1,y1,x2,y2);
    printf("D=%.2f",D);
    return 0;
} 
