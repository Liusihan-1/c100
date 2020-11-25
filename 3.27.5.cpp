//猴子选大王 
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	int a[N];
	int i;
	for(i=0;i<N;i++){
		a[i]=1;
	}
	i=0;
	int count=0;
	int mark=0;
	int number=0;
	 
	while(1){
	
		 while( 1) {
			if(a[i]!=0){
			    mark++ ;
				count++;
				if(mark%3==0){
				    a[i]=0;
					number++;
					}
				if(number==N)
				 	goto sign;
			}
			    if(i==N-1)
				    break;
			    i++;
                }
                i=0;
                }
	sign:
    printf("%d",i+1);
	return 0;
}  
