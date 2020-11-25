//找出不是两个数组共有的元素
#include<stdio.h>
int main(void)
{
	int m,n,i,j,k,idx=0;
	int cnt=0,a[20],count=0;
	scanf("%d",&m);
	int s[20];
	for(i=0;i<m;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&n);
	int t[20];
	for(j=0;j<n;j++){
		scanf("%d",&t[j]);
	}                            
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(s[i]==t[j]){
				break;
			}
		}
		if(j>=n){
			for(k=0;k<count;k++){
				if(s[i]==a[k]){
					break;
				}
			}
			if(k>=count){
				a[k]=s[i];
				count++;
			}
		}
	}                               
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(t[i]==s[j]){
				break;
			}
		}
		if(j>=m){
			for(k=0;k<count;k++){
				if(t[i]==a[k]){
					break;
				}
			}
			if(k>=count){
				a[k]=t[i];
				count++;
			}
		}
	}                                
	printf("%d",a[0]);
	for(int z=1;z<count;z++){
		printf(" %d",a[z]);
	}
	return 0;
}
