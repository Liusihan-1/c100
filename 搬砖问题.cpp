//36块砖，36人搬，男搬4，女搬3，两个小孩抬1块，要求一次全搬完
//编写程序，求解需要男、女、小孩各多少人。
//输出格式：男*人,女*人,小孩*人
#include<stdio.h>
#include<math.h>
 
int main()
{
 int x,y,z;
 for(x = 1;x < 9;x ++) {
  for(y = 1;y < 12;y ++)  {
   z = 36-x-y;
   if(z%2==0) {
    if(4*x + y*3 + z/2 == 36)
     printf("男%d人,女%d人,小孩%d人\n",x,y,z);
   } 
  }
 } 
 return 0;
 
}

 
