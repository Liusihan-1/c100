#include<stdio.h>

#include<string.h>

int main()

{ 
int i;

int a[3][3]={1,2,3,4,5,6,7,8,9};



for(i=0;i<3;i++)

printf("%d  ",a[i][2-i]);
}
