#include <stdio.h>
#include <stdlib.h>
typedef union{
	long i;
	int k[5];
	char c;
}DATE;
DATE max;
struct data{
	int cat;
//	DATE cow;
	char c;
	double dog;
}; 

int main()
{
	//printf("%d",sizeof(struct data)+sizeof(max));
	printf("%d",sizeof(struct data));
}
