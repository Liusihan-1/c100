#include "stdio.h"
 
#define m 3
#define n 3
int main(void)
{
 /*��ʼ��A[n] */
 int A[m][n] = {1,2,3,6,4,5,8,7,9};
 /*�����A�е�����*/
 Get_Saddle(A);
}
/*�����A�е�����*/
void Get_Saddle(int A[m][n])
{
 int i,j,k;
 int flag,min,minCol;
 for(i=0; i<m; ++i)
 {
  /*��һ���е���Сֵ*/
  min = A[i][0];
  minCol = 0;
  for(j=0; j<n; ++j)
  { 
   if(A[i][j] < min)
   { 
    min = A[i][j]; 
    minCol = j;
   }
  }
 
  /*�ж������Сֵ�Ƿ񰰵㣬���Ƿ������е����ֵ*/
  flag = 1;
  for(k=0; k<m; ++k)
  {
   if(min < A[k][minCol])
   {
    flag=0;
    break;
   }
  }
 
  if(flag)
  {
   printf("Found a saddle element!\nA[%d][%d] = %d", i, minCol, A[i][minCol]);
  }
 
 }
 printf("\n");
}
