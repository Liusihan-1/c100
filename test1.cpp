#include<stdio.h>
#include<stdlib.h>
int main()  
{  
	int a=123456,b;
	while(a){
		b=a%10;
		a/=10;
		switch(b){
			default:
				printf("%d",b++);
			case 1:
				break;
			case 2:
				printf("%d",b++);
				break;
			case 3:
				printf("%d",b++);
			case 4:
				printf("%d",b++);
			case 5:
				printf("%d",b++);
		}
	}	 
	
	return 0;
}

