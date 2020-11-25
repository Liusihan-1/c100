//最长对称子串

 
#include<stdio.h> 
#include<math.h>
#include<string.h>
#include<stdlib.h>
void zhongjian(int t);
void bianbian(int t);
char str[1001];
int n,max=0;
int main(){
	int i;
	gets(str);
	n=strlen(str);
	for(i = 0; i < n; i++){
		zhongjian(i);
		bianbian(i);
	}
	printf("%d",max);
	return 0;
}
void zhongjian(int t){
	int i,j=1;
	for(i = 1;t - i >-1&&t + i < n+1; i++){
 
		if(str[t - i] == str[t + i]){
			j+=2;
		}
		else break;
 
 
	}
	if(max < j) max = j;
 
}
void bianbian(int t){
	int i,j1=0,j2=0;
	for(i = 0;t - i -1 > -1&& t + i < n+1; i++){ //zuo
		if(str[t - i - 1] == str[t + i]){
			j1=j1+2;
		} else break;
	}
	for(i = 0;t - i > -1&& t + i +1 < n+1; i++){ //you
		if(str[t - i] == str[t + i +1]){
			j2=j2+2;
		} else break;
	}
	if(max < j1) max = j1;
	if(max < j2) max = j2;
} 
