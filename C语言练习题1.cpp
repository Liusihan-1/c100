//一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。
//本题要求编写程序，求一个给定的n阶方阵的鞍点。
//输入格式：
//输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。
//输出格式：
//输出在一行中按照“行下标 列下标”（下标从0开始）的格式输出鞍点的位置。如果鞍点不存在，则输出“NONE”。
//题目保证给出的矩阵至多存在一个鞍点
#include<stdio.h>
int main()
{
    int a[6][6];
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int k=0,y=0,flag=1,p=0;
    if(n==1)
    printf("0 0");
    else{
        for(i=0;i<n;i++)
        {
            y=i;
            for(p=0;p<n;p++){
                if(a[i][k]<=a[i][p]){
                k=p;
                }
            }
        
            for(j=0;j<n;j++){
            if(a[y][k]>a[j][k]){
            y=j;
            break;
            }
        }
        if(i==y)
        {
            flag=0;
            break;
        }
        }
    if(flag==0)
        printf("%d %d",i,k);
    else
         printf("NONE");
    }
    return 0;
    }

