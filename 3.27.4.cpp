//√∞≈›∑®≈≈–Ú
#include <stdio.h>
int main()
{
	int N,K,i,j;
	scanf("%d %d",&N,&K);
    int a[N];
	for(i=0;i<N;i++){
			scanf("%d",&a[i]);
	}
	int count=0;
	int temp;
	for(i=0;i<N;i++){
		for(j=0;j<N-i-1;j++){
	        if(a[j+1] <a[j]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
			}
		}	
		count++;
		if(count==K)
			break;
    }
	for(i=0;i<N;i++){
		if(i<N-1)
			printf("%d ",a[i]);
		else
			printf("%d",a[i]);
	}
	return 0;
} 
