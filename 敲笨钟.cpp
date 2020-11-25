#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,h,k=0;
	int flag1=0,flag2=0;
	char a[105];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(a);
		flag1=0;
		flag2=0;
		k=0;
		for(j=0;j<strlen(a);j++){
			if(flag2!=1&&a[j]==' '){
				k++;	
			}
			if(a[j]=='o'&&a[j+1]=='n'&&a[j+2]=='g'&&a[j+3]==','){
				flag1=1;
			}
			if(a[j]=='o'&&a[j+1]=='n'&&a[j+2]=='g'&&a[j+3]=='.'){
				flag2=1;
				break;
			}	
		}
		if(flag1==1&&flag2==1){
				k=k-2;
				h=0;
				while(k>0){
					printf("%c",a[h]);
					if(a[h]==' ')
						k--;
					h++;
				}
				printf("qiao ben zhong.\n");
			}
		else{
			printf("Skipped\n");
		}
	}
	return 0;
}
