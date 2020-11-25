#include "stdio.h"
 
#define m 3
#define n 3
int main(void)
{
 /*初始化A[n] */
 int A[m][n] = {1,2,3,6,4,5,8,7,9};
 /*求矩阵A中的马鞍点*/
 Get_Saddle(A);
}
/*求矩阵A中的马鞍点*/
void Get_Saddle(int A[m][n])
{
 int i,j,k;
 int flag,min,minCol;
 for(i=0; i<m; ++i)
 {
  /*求一行中的最小值*/
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
 
  /*判断这个最小值是否鞍点，即是否所在列的最大值*/
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
