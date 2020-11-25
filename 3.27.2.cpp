//找出不是两个数组共有的元素 
#include<stdio.h>
int main(){
	int n,m;
	int c[20],k=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	int t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				t++;
			}
				t++;
			
		}
		if(t==m){
			t=0;
			c[k]=a[i];
			k++;
		}else{
			t=0;
		}
	}
 
	int y=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i]==a[j]){
				y++;
			}
				y++;
		}
		if(y==n){
			y=0;
			c[k]=b[i];
			k++;
		}else{
			y=0;
		}
	}
printf("%d",c[0]);
for(int i=1;i<k;i++){
	int flag=1;
	for(int j=0;j<i;j++){
	    if(c[j]==c[i])
		flag=0;	
	}
	if(flag==1){					
		printf(" %d",c[i]);
	}
}
} 
